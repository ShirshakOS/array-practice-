//program to reverse the elements of an array
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    j=n-1;
    int array2[n];
    for(i=0;i<n;i++)
    {
        array2[j--] = array[i];
    }
    printf("The reversed array is: \n");
    for(i=0;i<n;i++)    
    {
        printf("%d ",array2[i]);
    }
    return 0;
}