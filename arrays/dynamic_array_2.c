// Dynamic array for positive integers
// An integer can occur a single time in the array

#include <stdio.h>

#include <stdlib.h>

#define PAGE_SIZE 2
#define MAGIC_NUMBER -9999
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

int search(DynamicArray* d, int value)
{
	int *array = d->array;
	for(int i=0; i<=d->max_index; i++){
		if(array[i] == value) return i;
	}	
	printf("Search: no match found for %d\n", value);
	return MAGIC_NUMBER;
}

int insert(DynamicArray *d, int val)
{
    if(search(d, val) == MAGIC_NUMBER) {
        printf("Insert: ERROR, %d is already in the array\n", val);
        return 1;
    }

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


int delete(DynamicArray* d, int val)
{
    // TODO: handle case where the whole page was deleted
    int del_index = search(d, val);
    if(del_index == -1) {
        printf("Delete: ERROR, no such element found\n");
        return 1;
    }

    int *array = d->array;
    array[del_index] = 0;
    for(int i = del_index; i < d->max_index; i++)
        array[i] = array[i+1];
    
    --(d->max_index);
    printf("Delete: SUCCESS, %d was removed\n", val);

    return 0;
}

int main(void)
{
	DynamicArray my_array = init_array();
	insert(&my_array, 2);
	insert(&my_array, 5);
	insert(&my_array, 3);
	insert(&my_array, 4);
	search(&my_array,4);
    delete(&my_array, 100);
    delete(&my_array, 4);
    insert(&my_array, 3);
    return 0;
}

