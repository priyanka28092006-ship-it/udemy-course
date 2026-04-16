//larger number between 2
#include <stdio.h>
int check (int x, int y){
if(x>y){
    printf("1st number is bigger");
}
else{
    printf("2nd number is bigger");

}
return 0;
}


int main(){

    printf("Enter two numbers");
int a,b;
scanf("%d",&a);
scanf("%d",&b);
int c= check(a,b);

}