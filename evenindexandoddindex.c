// write a program to find the sum of all the even indexed and odd indexed element from the array
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        printf("Element value %d: ",i );
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nThe even elements in the array are: ");
        for(i=0;i<n;i++)
    {
           if(a[i]%2==0)
           printf("%d ",a[i]);
    }
    printf("\nThe odd elements in the array are: ");
        for(i=0;i<n;i++)
    {
            if(a[i]%2!=0)
            printf("%d ",a[i]);
    }   
    int sume=0, sumo=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sume+=a[i];
        }
        else if(a[i]%2!=0)
        {
            sumo += a[i];
        }
    }
    printf("The sum of even elements is %d and the sum of odd element is %d.",sume, sumo);
    return 0;
}