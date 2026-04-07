//armstrong number from 100 to 999
#include <stdio.h>

int main(){
    int rem,fab,temp; 
for(int i =100;i<=999;i++){
    fab=0;
    temp=i;
    while (temp!=0){

        rem = temp%10;
        fab+=(rem*rem*rem);
        temp/=10;

    }
   if(fab==i){

    printf(" number = %d ,is armstrong \n",i);
   }
  else{
      printf(" number = %d ,is not armstrong \n",i);
  }
}

}