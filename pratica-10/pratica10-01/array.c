#include <stdio.h>
#include <stdlib.h>

float * read_array(int * n)
{
    float * array;
    float array2[10];
    array2 = array2[0];
    scanf("%d", n);
    
    array = (float*) malloc(*n * sizeof(float));

    for(int i = 0; i < n; i++)
    {
        scanf("%f", array[i]);
    }

    return array;
}

void free_array(float *array, int *n)
{
    for(int i = 0; i < *n; i++)
    {
        free(array[i]);
    }
    free(array);
}

