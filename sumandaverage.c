//program to find the sum and average of all the elements in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you would like to enter in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n ");
    for(int i=0;i<n;i++)
    {
        printf("Element 1: ");
        scanf("%d, ",&array[i]);
    }
    printf("The elements in the array are: ");
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
        sum += array[i];
    }
    float avg;
    avg = sum/n;
    printf("\nThe sum of the array is %d and the average of all the elements in the array is %f",sum, avg);
    return 0;
}