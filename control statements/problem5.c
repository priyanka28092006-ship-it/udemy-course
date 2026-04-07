#include <stdio.h>

int main(){
int n;
printf("Enter a number \n");
scanf("%d",&n);
int reversed=0,rem;
// method1
/*while(n>0){
rem=n%10;
printf("%d",rem);
n/=10;
}*/
//method 2
while (n!=0){
rem=n%10;
reversed = reversed*10 + (rem-2);
n/=10;
}
printf("reversed number with difference of 2 = %d",reversed);
}