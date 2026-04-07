#include <stdio.h>
int main(){
int n1,n2,n3;  
printf("Enter number1 \n");
scanf("%d",&n1);
printf("Enter number2 \n");
scanf("%d",&n2);
printf("Enter number3 \n");
scanf("%d",&n3);
if(n1>n2&&n1>n3){

    printf("number1 is greatest");
}
if(n2>n1&&n2>n3){

    printf("number2 is greatest");
}
else{
 printf("number3 is greatest");

}
}