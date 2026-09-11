#include<stdio.h>
int main()
{
    int n;
    printf("How many elements do you want in the array?:");
    scanf("%d",&n);
    int ar[n], i;
    printf("Enter the elements of the array:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int evensum =0, oddsum=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        evensum+=ar[i];
        else if(ar[i]%2!=0)
        oddsum+=ar[i];
    }
    printf("The sum of even elements is: %d\n",evensum);
    printf("The sum of odd elements is : %d",oddsum);
    return 0;
}