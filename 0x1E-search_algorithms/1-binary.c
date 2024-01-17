#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of integers using Binary Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * 
 * Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
    int l, r, mid, i;
    l = 0;
    r = size - 1;
    
    if (array == NULL)
        return (-1);
    while(l <= r)
    {
        mid = (l + r)/2;
        printf("Searching in array: ");
        for (i = l; i <= r; i++)
        {
            if (i != r)
                printf("%d, ", i);
            else
                printf("%d", i);
        }
        printf("\n");
        if (array[mid] == value)
            return mid;
        else if (array[mid] > value)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}