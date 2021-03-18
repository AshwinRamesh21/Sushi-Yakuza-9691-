#include<stdio.h>
#define MAX_SIZE  8
int nonrep(int arr[], int n)
{

    int result = 0;
    int x, sum,i,j;
    for (i = 0; i < MAX_SIZE; i++)

    {
      sum = 0;
      x = (1 << i);
      for (j=0; j< n; j++ )
      {
          if (arr[j] & x)
            sum++;
      }
      if (sum % 3){
        result |= x;
        printf("X=%d\n",x);

      }
    }

    return result;
}

int main()
{
    int arr[] = {3, 1, 3, 1, 1, 12, 3};
    int n = sizeof(arr) / sizeof(int);
    printf("The element with single occurrence is: %d",nonrep(arr, n));
    return 0;
}
