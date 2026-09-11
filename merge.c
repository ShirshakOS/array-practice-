#include<stdio.h>
int main()
{
    int n1, n2;
    printf("How many elements in array 1 do you want?: ");
    scanf("%d",&n1);
    printf("Enter the elements of array 1:\n ");
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("How many elements in array 2 do you want?: ");
    scanf("%d",&n2);
    printf("Enter the elements of array 2:\n ");
    int a2[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    int i=0,j=0,k=0;
    int merge[n1+n2];
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            merge[k] = a1[i];
            k++;
            i++;
        }
        else{
            merge[k] = a2[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        merge[k] = a1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        merge[k] = a2[j];
        k++;
        j++;
    }
    printf("The merged array is: \n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\n",merge[i]);
    }
    return 0;

}