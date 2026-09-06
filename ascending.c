//program to sort elements of an array in ascending
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                int temp;
                temp = array[i];
                array[i] = array[j];
                array[j] =temp;
            }
        }
    }
    printf("The elements in ascending order are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}