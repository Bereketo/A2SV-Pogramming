#include <stdlib.h>
#include <stdio.h>
/**
 *this program sortes the array of integers in increasing order using bubble sort algorithm
 *
 */
void countSwaps(int a_count, int* a);

int main (void)
{
   int a_count = 3;
   int* m = malloc(a_count*sizeof(int));
   for(int i =0; i<a_count; i++)
      m[i] = 3-i;
   countSwaps(a_count, m);
   free(m);
   return 0;
}
void countSwaps(int a_count, int* a) 
{
  
   int count=0;
   for (int i =0; i<a_count; i++)
      {
          for (int  j=0; j<(a_count) -1; j++)
             {
              if (a[j] > a[j+1])
                   {
                    int temp =a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    count++;
                   }
             }
      }
      
    printf("Array is sorted in %d swaps.\n", count);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d\n",a[a_count -1]);
      
}
