#include <stdio.h>

int main(){
int n;
printf("Enter a number \n");
scanf("%d",&n);
int sum =0, rem, mult=1;
while (n!=0){
rem=n%10;
sum+=rem;
mult*=rem;
n/=10;

}
printf("Sum of digits = %d \n",sum);
printf("multiplication of digits = %d",mult);
}