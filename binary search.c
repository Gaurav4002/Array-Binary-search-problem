#include<stdio.h>
int binarysearch(int arr[],int n,int ele)
{int start=0;
int end=n-1;
int mid;
    while(start<=end)
    {mid=(start+end)/2;
    if(ele==arr[mid])
    {printf("element found at position %d\n",mid);
    return mid;}
    else if(ele<arr[mid])
          end=mid-1;
    else 
          start=mid+1;
 }
 return -1;
}
int main()
{int n;
printf("enter the size of array");
scanf("%d",&n);
int ele;
     int arr[]={1,4,5,6,7,8};
    printf("enter the elemnt to search");
    scanf("%d",&ele);
    int result=binarysearch(arr,n,ele);
    if(result!=-1)
    printf("element %d present at position %d\n",ele,result);
    else
    printf("result not found");
    return 0;
    }