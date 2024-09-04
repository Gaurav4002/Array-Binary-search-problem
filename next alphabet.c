#include<stdio.h>
int ceiil(char arr[],char ele)
{
    int start=0;
    int end=3;
    int mid;
    char res="#";
    while(start<=end)
    {
    mid=(start+end)/2;
    if(arr[mid]==ele)
    start=mid+1;
    else if(arr[mid]<ele)
    {start=mid+1;}
    else
    {res=arr[mid];
    end=mid-1;
    }
    }
    return res;
}
void main()
{
    char ele;
    printf("enter the element which next ekement has to find");
    scanf("%s",&ele);
    char arr[]={'a','b','f','h'};
    char result=ceiil(arr,ele);
    if(result!='#')
    printf(" next element found is %c",result);
    else
    printf("result not found");
    return 0;
}