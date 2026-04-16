#include <stdio.h>
int sum(int x,int y){
int s = x+y;
return s;}
int main(){

printf("Enter two numbers");
int a,b;
scanf("%d",&a);
scanf("%d",&b);
int ans =sum(a,b);
printf("The sum is = %d",ans);
}