//armstrong number from 100 to 999

#include <stdio.h>

int main(){
    int rem ,fab=0; 
for(int i =100;i<=999;i++){
    while (i!=0){

        rem = i%10;
        fab+=rem*rem*rem;
        i/=10;

    }
   if(fab==i){

    printf(" number = %d is armstrong \n",i);
   }
   else{
    printf(" number = %d is not  armstrong \n",i);
   }
}

}