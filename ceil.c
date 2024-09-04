#include<stdio.h>
int ceiil(int arr[],int ele)
{
    int start=0;
    int end=6;
    int mid;
    int res=-1;
    while(start<=end)
    {
    mid=(start+end)/2;
    if(arr[mid]==ele)
    return arr[mid];
    else if(arr[mid]<ele)
    {start=mid+1;}
    else
    {res=arr[mid];
    end=mid-1;
    }
    }
    return res;
}
int main()
{
    int ele;
    printf("enter the element which ceil has to find");
    scanf("%d",&ele);
    int arr[]={1,2,3,8,9,10,12};
    int result=ceiil(arr,ele);
    if(result!=-1)
    printf("element found is %d",result);
    else
    printf("result not found");
    return 0;
}