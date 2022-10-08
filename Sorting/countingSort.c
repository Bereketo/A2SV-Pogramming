#include <stdlib.h>
#include <stdio.h>
/*
 * countingSort algorithm
 *
 */
int* countingSort(int arr_count, int* arr, int* result_count) 
{
    result_count = malloc(sizeof(int) * 100);
    if (result_count == NULL)
        return NULL;
    for (int i =0; i<arr_count; i++)
         *(result_count + i ) = 0;
    for (int i =0; i<arr_count; i++)
        {  
           for(int j =0; j < arr_count; j++ )
               if(arr[i] == j)
                 *(result_count +j) =*(result_count +j)+1; 

               
        }
  return result_count;

}
