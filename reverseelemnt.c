//reverse array by swapping elements from both ensd
#include<stdio.h>
int main()
{
    int n, i;
    printf("How many elements in the array? ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    //reverseing the elements
    int temp;
    for(i=0;i<n/2;i++)
    {
       temp = array[i];
       array[i] = array[n-1-i] ;
       array[n-1-i] = temp;
    }  
    printf("The reversed array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}