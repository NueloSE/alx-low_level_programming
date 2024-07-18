#include "search_algos.h"

int main(void)
{
	int array[] = {
		/*1, 3, 5, 14, 21, 25, 26, 27*/
		/*1, 3, 5, 7, 9, 11, 13, 15*/
		/*0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9*/
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9,
		10, 11, 12, 12, 12, 19, 19, 19, 71, 71, 71, 81, 82, 83, 84
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 4, interpolation_search(array, size, 4));
    printf("Found %d at index: %d\n\n", 0, interpolation_search(array, size, 0));
    printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));
	printf("Found at index: %d\n", interpolation_search(array, 35, 123456789));
    return (EXIT_SUCCESS);
}
