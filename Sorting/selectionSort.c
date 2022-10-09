#include <stdio.h>
#include <stdlib.h>
/* 
 * selection sort algorithm
 *   
 */
void selectionSort(int *arr, int size);
int main(void)
{
   int arr[] ={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   int size = sizeof(arr)/sizeof(int);
   selectionSort(arr, size);

    return 0;
}

void selectionSort(int *arr, int size)
{   
        for(int i =0; i < size-1; i++ )
        {
           int min_index = i;
           for(int j =i+1; j<size; j++)
             if (arr[min_index] > arr[j])
                   min_index = j;
               if(min_index != i)
                   {
                     int temp = arr[i];
                     arr[i] = arr[min_index];
                     arr[min_index] = temp;
                   }
        }
    for (int i =0; i<size; i++ )
       printf("%d ",arr[i]);

}
