
# include <stdio.h>

# include "NumClass.h"



int main(){

    int start;
    int end;
    int x;
    printf("plese pick a full number");
    scanf("%d", &start);
    printf("plese pick a full number bigger than the first");
    scanf("%d", &end);
    
    
    printf("The Armstrong numbers are: ");
    for (int i=start; i<=end;i++){
        x=isArmstrong(i);
        if (x==1){
            printf("%d ",i);
        }
    }
    printf("\n");
    
    printf("The Palindromes are: ");
    for (int i=start; i<=end;i++){
        x=isPalindrome(i);
        if (x==1){
            printf("%d ",i);
         }
    }
    printf("\n");

    printf("The Prime numbers are: ");
    for (int i=start; i<=end;i++){
        x=isPrime(i);
        if (x==1){
            printf("%d ",i);
         }
    }
    printf("\n");

    printf("The Strong numbers are: ");
    for (int i=start; i<=end;i++){
        x=isStrong(i);
        if (x==1){
            printf("%d ",i);
         }
    }
    printf("\n");
    
    
    
    
    return(0);



}