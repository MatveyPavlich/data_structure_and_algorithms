#include <stdio.h>
#include <stdlib.h>

#define PAGE_SIZE 2

// TODO: Implement delete

typedef struct {
	int page_number;
	int *array;
	int max_index; // -1 for empty
} DynamicArray;

DynamicArray init_array(void)
{
	DynamicArray d;
	d.page_number = 1;
	d.max_index = -1;
	d.array = malloc(sizeof(int) * PAGE_SIZE);
	if (d.array == NULL){
		perror("Malloc failed");
		abort();
	}
	return d;
}

int insert(DynamicArray *d, int val)
{
	int capacity = PAGE_SIZE * d->page_number;
	if(d->max_index + 1 == capacity){
		++(d->page_number);
		int new_capacity = capacity + PAGE_SIZE;
		int *new_array = realloc(d->array, sizeof(int) * new_capacity);
		if(new_array == NULL){
			perror("Realloc failed");
			abort();
		}
		d->array = new_array;
		printf("New page allocated. Old capacity: %d; New capacity %d\n", capacity, new_capacity);
	}
	d->array[d->max_index + 1] = val;
	++(d->max_index);
	printf("Insert: %d on position %d\n", val, d->max_index);
	return 0;
}

int search(DynamicArray* d, int value)
{
	int *array = d->array;
	for(int i=0; i<=d->max_index; i++){
		if(array[i] == value) return i;
	}	
	printf("Search: no match found for %d\n", value);
	return -1;
}


// int delete(DynamicArray* d, int val)
// {
// 	return 0;
// }

int main(void)
{
	DynamicArray my_array = init_array();
	insert(&my_array, 2);
	insert(&my_array, 5);
	insert(&my_array, 3);
	insert(&my_array, 4);
	search(&my_array,4);
    	return 0;
}

