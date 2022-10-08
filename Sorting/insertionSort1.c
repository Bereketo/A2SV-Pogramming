#include <stdio.h>
#include <stdlib.h>
/*
 * this functions implements insertion sort 
 * this codes is provided as a solution for the problem found in https://www.hackerrank.com/challenges/insertionsort1/problem.
 */
void insertionSort1(int n, int arr_count, int* arr)
{
    n = arr[arr_count -1];
    int k = arr_count -1;
    while(k >= 0)
      {
        if (n >= arr[k-1])
          {
            arr[k] = n;
           break;
          }
        else if(n < arr[k-1])
           arr[k] = arr[k-1];
        for(int i =0; i<arr_count; i++)
           printf("%d", arr[i]);
           printf("\n");
        k--;
      }
    for (int i =0; i < arr_count; i++)
        printf("%d", arr[i]);
}
