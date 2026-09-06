//program to search an element in an array
//linear search
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements in the array:  ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The size of the array is %d",sizeof(array));
    printf("The position and value of the elements of the array are: \n");
    for(i=0;i<n;i++)
    {
        printf("Element value: %d and Position: %d \n",array[i],i);
    }
    int search;
    printf("Enter the integer value of the element that you would like to search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==array[i])
        {
            printf("The element is in the %dth index of the array",i);
        }
    }
    return 0;
}