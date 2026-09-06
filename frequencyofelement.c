#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n ");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("The elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    int count, alreadyrepeated;
    int j;
    for(i=0;i<n;i++)
    {
        count =1;
        alreadyrepeated = 0;
        for(j=0;j<i;j++)
        {
            if(array[i]==array[j])
            {
                alreadyrepeated =  1;
                break;
            }
        }
        if(alreadyrepeated)
        continue;

        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            count++;
        }
        printf("\n%d has repeated %d times",array[i], count);
    }
    return 0;
}