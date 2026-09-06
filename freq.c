//count the frequency of each element in an array
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n], j;
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        printf("Number %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("The elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    int count, repeatedcount;
    for(i=0;i<n;i++)
    {
        count =   1;
        repeatedcount = 0;
        for(j=0;j<i;j++)
        {
            if(array[i]==array[j])
            {
                repeatedcount = 1;
                break;
            }
        }
        if(repeatedcount)
        continue;
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        printf("\n%d is repeated %d times",array[i],count);
    }
    return 0;
}