#include <stdlib.h>
#include <stdio.h>
/*
 * this programs finds how many number are less than from an element of an arryay in a given array
 *
 */
int *smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize);
int main (void)
{
 int nums[]={8,5,9,7,3,1};
 int size = sizeof(nums)/sizeof(int);
 int *con =smallerNumbersThanCurrent(nums,size, &size);
 for(int i=0; i<size; i++)
    printf("%d",*(con+i));  return 0;
}
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{


  *returnSize = numsSize;
  int* arr = malloc(sizeof(int) * numsSize);
    for(int i =0; i< numsSize; i++)
        *(arr+i) = 0;

   for(int i=0; i<numsSize; i++)
       for(int j =0; j<numsSize; j++)
           if(nums[i]>nums[j] && i != j)
               *(arr+i) +=1;
    return arr;

 
}
