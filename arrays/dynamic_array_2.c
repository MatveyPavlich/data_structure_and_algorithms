#include <stdio.h>
#include <stdlib.h>

#define PAGE_SIZE 5

// TODO: Add cases into insert() that would handle page generation

typedef struct {
	int page_number;
	int *array;
	int max_index;
} DynamicArray;

DynamicArray init_array(void)
{
	DynamicArray d;
	d.page_number = 1;
	d.array = malloc(sizeof(int) * PAGE_SIZE);
	if (d.array == NULL)
		abort();
	return d;
}

int insert(DynamicArray *d, int val)
{
	d->array[d->max_index + 1] = val;
	++(d->max_index);
	printf("Insert: %d on position %d\n", val, d->max_index);
	return 0;
	// Installed arch on my 2nd laptop, so no coding today -_-
}


int main(void)
{
	DynamicArray my_array = init_array();
	insert(&my_array, 2);
	insert(&my_array, 5);
	insert(&my_array, 3);
	insert(&my_array, 4);
    	return 0;
}

