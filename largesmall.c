//largest and smallest in an array
#include<stdio.h>
int main()
{
    int smallest, largest,n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The elements in the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    //sorting the in ascending
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                int temp;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\nThe array elements sorted in ascending order are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    smallest = array[0];
    largest = array[n-1];
    printf("\nThe largest element is %d and the smallest element is %d ",largest, smallest);
    return 0;

}