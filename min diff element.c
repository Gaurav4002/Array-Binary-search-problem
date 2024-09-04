#include<stdio.h>
#include<stdlib.h>
int min(int arr[],int ele)
{
    int start=0;
    int end=4;
    int mid;
    while(start<=end)
    {mid=(start+end)/2;
        if(arr[mid]==ele)
        return arr[mid];
        else if(arr[mid]<ele)
        start=mid+1;
        else
       end=mid-1;}
       int l=abs(arr[start]-ele);
       int h=abs(arr[end]-ele);
       if(h>l)
       return arr[start];
       else
       return arr[end];
}
int main()
{int start=0;
int end=4;
    int ele;
    printf("enter the element");
    scanf("%d",&ele);
    int arr[]={1,3,8,10,15};
    int closest=min(arr,ele);
    printf("the closest number with minimum difference is%d",closest);
    return 0;
    
}