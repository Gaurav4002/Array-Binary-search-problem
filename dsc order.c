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
    else if(arr[0]>arr[1] && ele<arr[mid])//index comparison to know order(asc or dsc) of array
          start=mid+1;//here opposite of ascending order search
    else 
          end=mid-1;
 }
 return -1;
}
int main()
{int n;
printf("enter the size of array");
scanf("%d",&n);
int ele;
     int arr[]={20,15,9,6,3};
    printf("enter the elemnt to search");
    scanf("%d",&ele);
    int result=binarysearch(arr,n,ele);
    if(result!=-1)
    printf("element %d present at position %d\n",ele,result);
    else
    printf("result not found");
    return 0;
    }