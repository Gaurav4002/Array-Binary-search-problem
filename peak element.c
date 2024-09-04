#include<stdio.h>
int peak(int arr[])
{
    int start=0;
    int end=6;
    int mid;
    while(start<=end)
    {mid=(start+end)/2;
    if(mid>0 && mid<6)
    {if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
    return mid;
    else if(arr[mid-1]>arr[mid])
    end=mid-1;
    else 
    start=mid+1;}
    else if(mid==0)
    {
        if(arr[0]>arr[1])
        return 0;
        else
        return 1;
    }
    else if(mid==6)
    {
        if(arr[6]>arr[5])
        return 6;
        else
        return 5;
    }
    }

    
    return -1;
}
int main()
{
//printf("enter the size of array");
//scanf("%d",&n);
int ele;
     int arr[]={1,2,5,7,8,4,1};
   // printf("enter the elemnt to search");
   // scanf("%d",&ele);
    int result=peak(arr);
    if(result!=-1)
    printf("element present at position %d\n",result);
    else
    printf("result not found");
    return 0;
    }