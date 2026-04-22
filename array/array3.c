//WAP to convert a decimal into a binary number.
#include<stdio.h>
int main()
{
    int num,rem,arr[10],i,j;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    i=0;
    while(num>0)
    {
     arr[i]=num%2;
     num=num/2;
     i++;
    }
    printf("Binary number: ");
    for(j=i-1;j>=0;j--)
        printf("%d",arr[j]);

    return 0;
}
