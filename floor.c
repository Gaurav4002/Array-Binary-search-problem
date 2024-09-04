#include<stdio.h>
int flor(int arr[],int ele)
{int mid;
int result=-1;
    int start;
    int end=6;
    while(start<=end)
   { mid=(start+end)/2;
    if(arr[mid]==ele)
    return arr[mid];
    else if(arr[mid]<ele)
    {result=arr[mid];
    start=mid+1;}
    else
    end=mid-1;}
    return result;
}
int main()
{int ele;
int arr[]={1,2,3,4,6,9,11};
printf("enter the element which floor has to find");
scanf("%d",&ele);
int res=flor(arr,ele);
if(res!=-1)
printf("floor of the element is%d",res);
else
printf("not found");
return 0;

}
