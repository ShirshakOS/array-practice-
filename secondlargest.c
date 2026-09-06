//program to find the second largest of an array
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    //finding the second largest of the array
    int largest, secondlargest;
    largest = array[0];
    for(i=0;i<n;i++)
    {
        if(array[i]>largest)
        {
             secondlargest=largest;
            largest = array[i];
           
        }
    }
    printf("The elements of array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("The largest element is %d and second largest element is %d ",largest, secondlargest);
    return 0;
}