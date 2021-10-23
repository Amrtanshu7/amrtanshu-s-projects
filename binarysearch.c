#include<stdio.h>

int main()
{
    int a[10],i,n,flag=0,key,high,low,mid;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter the elements of array in ascending order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
    low=0;high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        if(key>mid)
        low=mid+1;
        else
        high=mid-1;
    }
    if(flag==1)
    printf("element is found at position%d",mid+1);
    else
    printf("element not found.");
}