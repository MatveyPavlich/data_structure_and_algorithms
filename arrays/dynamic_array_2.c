#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#define PAGE_SIZE 5

typedef struct {
	int page_number;
	int *array[PAGE_SIZE];
} DynamicArray;

DynamicArray init_array(void)
{
	DynamicArray d;
	d.page_number = 1;
	d.array = malloc(sizeof(int) * 5);
	if(d.array == NULL) {
		printf("INIT_ARRAY:Malloc failed. Initiation aborted\n");
		return NULL;
	}
	return d;
}


int main(void)
{

	DynamicArray my_array = init_array();
	printf("check\n");
	return 0;
}


