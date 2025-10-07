#include<stdio.h>
int main() 
{
    int n, i;
    int arr[100];
    long product = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
      {
          scanf("%d", &arr[i]);
      }
    for (i = 0; i < n; i++) 
     {
          product *= arr[i];
      }
    printf("Product of all elements = %lld", product);
    return 0;
}
