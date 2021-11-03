
# include <stdio.h>

# include "NumClass.h"



int main(){

    int start=-1;
    int end=-1;
    int x=0;
    int temp=0;
  //  printf("plese pick a full number");
   while(start<0){
    scanf("%d", &start);
   }
   // printf("plese pick a full number bigger than the first");
    while(end<0){
    scanf("%d", &end);
    }
    
    if (end<start){
    temp=end;
    end=start;
    start=temp;
    }


    printf("The Armstrong numbers are:");
    for (int i=start; i<=end;i++){
        x=isArmstrong(i);
        if (x==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    
    printf("The Palindromes are:");
    for (int i=start; i<=end;i++){
        x=isPalindrome(i);
        if (x==1){
            printf(" %d",i);
         }
    }
    printf("\n");

    printf("The Prime numbers are:");
    for (int i=start; i<=end;i++){
        x=isPrime(i);
        if (x==1){
            printf(" %d",i);
         }
    }
    printf("\n");

    printf("The Strong numbers are:");
    for (int i=start; i<=end;i++){
        x=isStrong(i);
        if (x==1){
            printf(" %d",i);
         }
    }
    printf("\n");
    
    
    
    
    return(0);



}