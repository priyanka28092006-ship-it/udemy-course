#include <stdio.h>

int compare(int x){

if(x%2==0){
    printf("Number is even");

}
else{
     printf("Number is odd");
}
return 0;
}

int main (){

    printf("enter a number");
    int a;
    scanf("%d",&a);
   int c =compare(a);
}

