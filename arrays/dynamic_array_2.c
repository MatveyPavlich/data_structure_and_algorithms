// Dynamic array for positive integers
// An integer can occur a single time in the array

#include <stdio.h>
#include <stdlib.h>

#define PAGE_SIZE 2
#define MAGIC_NUMBER -9999

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
    
        // Fill array with magic numbers that would indicate unused space
        for(int i = 0; i < PAGE_SIZE; i++) {
                d.array[i] = MAGIC_NUMBER;
        }

	return d;
}

int search(DynamicArray* d, int value)
{
        
        // MAGIC_NUMBER is returned on no match, else index of the match
        if(d->max_index == -1) {
                printf("Search: ERROR, array is empty\n");
                return MAGIC_NUMBER;
        }

	int *array = d->array;

        for(int i=0; i<=d->max_index; i++){
		if(array[i] == value) return i;
	}	
	printf("Search: no match found for %d\n", value);

	return MAGIC_NUMBER;
}

int insert(DynamicArray *d, int val)
{
        // Retrn: 0 on success, 1 on fail
        if(search(d, val) != MAGIC_NUMBER) {
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
        int del_index = search(d, val);
        if(del_index == MAGIC_NUMBER) {
                printf("Delete: ERROR, no such element found\n");
                return 1;
        }
 
        int *array = d->array;
         
        // Case where the whole page should be deleted
        if(del_index == (d->page_number - 1) * PAGE_SIZE && d->page_number > 1) {
                --(d->page_number);
                int new_capacity = (d->page_number) * PAGE_SIZE;
                d->array = realloc(array, sizeof(int) * new_capacity);
                printf("Delete: %d was the last element on the page. Page %d is removed.\n", val, d->page_number);
                return 0;
        }

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
        delete(&my_array, 3);
        return 0;
}

