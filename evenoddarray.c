//program to count the even and odd elements in an array
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n ");
    for(i=0;i<n;i++)
    {
        printf("Element 1: ");
        scanf("%d",&array[i]);
    }
    int countodd=0, counteven=0;
    printf("The list of elements in the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
        if(array[i]%2==0)
        {
            counteven ++;
        }
        else if (array[i]%2!=0)
        countodd++;
    }
    printf("\n The number of odd elements in the array is %d",countodd);
    printf("\nThe number of even elements in the arrray is %d",counteven);
    return 0;
}
