#include<stdio.h>
int binarysearch(int arr[],int n,int ele)
{int start=0;
int end=n-1;
int mid;
int res=-1;
    while(start<=end)
    {mid=(start+end)/2;
    if(ele==arr[mid])
    {
    res=mid;
   end=mid-1;//first occurence of element
   //start=mid+1;//last occurence 
    }
    else if(ele<arr[mid])
          end=mid-1;
    else 
          start=mid+1;
 }
 return res;
}
int main()
{int n;
printf("enter the size of array");
scanf("%d",&n);
int ele;
     int arr[]={1,2,4,4,4,5,6};
    printf("enter the elemnt to search");
    scanf("%d",&ele);
    int result=binarysearch(arr,n, ele);
    if(result!=-1)
    printf("element %d  first found at %d position",ele,result);
    else
    printf("result not found");
    return 0;
    
    }