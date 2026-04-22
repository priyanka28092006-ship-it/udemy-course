//WAP to understand dynamic allocation of memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
        printf("Memory not avaliable!");
    for(i=0;i<n;i++)
    {
        printf("Enter an integer: ");
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
      printf("%d\t",*(p+i));

    free(p);

    return 0;
}