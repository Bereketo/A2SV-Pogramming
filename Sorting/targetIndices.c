#include <stdlib.h>
#include <stdio.h>
/*
 *finds Target Indices After Sorting Array
 *
 */

int * targetIndices(int* nums, int numsSize, int target, int* returnSize);
int main(void)
 {
  int k =0;
  int nums[]={1,2,5,2,3};
  int numsSize = sizeof(nums)/4;
  int target =2;
  for(int i =0; i<numsSize; i++)
     if(nums[i]==target)
          k++;
  int *returnSize = &k;
  int *result = targetIndices(nums, numsSize, target, returnSize);
  for(int i =0; i < *returnSize; i++ )
      printf("%d ", *(result +i));
  return 0;

 }


int* targetIndices(int* nums, int numsSize, int target, int* returnSize)
{
  int count =0;
  int *result;
   for(int i =0; i < numsSize; i++)
       for(int j =0; j < numsSize -1; j++)
           if(nums[j] > nums[j+1])
            { 
               int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
             }
    for(int i =0; i < numsSize; i++)
        if(target == nums[i])
            count++;
    result = malloc(sizeof(int) * count);
    int j=0;
    for(int i =0; i< numsSize; i++)
        if(target == nums[i])
        {
            result[j] = i;
             j++;
        }
   *returnSize = count;
    return result;
}
