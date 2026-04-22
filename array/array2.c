//WAP to reverse the elements of an array
#include<stdio.h>
int main()
{
    int i,j,temp,arr[10]={1,2,3,4,5,6,7,8,9,10}; //10 9 8 7 6    5 4 3 2 1
    for(i=0,j=9;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("after reversing the array is : ");
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);

    return 0;
}