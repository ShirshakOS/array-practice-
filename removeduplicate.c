#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of elements in the array: \n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("The original array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                for(int k=i;k<n-1;k++)
                {
                    array[k] = array[k+1];
                }
                n--;
                j--;
            }
        }
    }
   
    printf("The revised array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}