//program to read n elements in an array and print them
#include<stdio.h>
int main()
{
    int n;
    printf("How many elements?\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("The elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}