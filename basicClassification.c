# include <stdio.h>

int isPrime(int n){

    int flag=1;
        if (n<=1){
            flag =0;
        }
        else{
            for (int i=2; i<=n/2 && flag!=0; i++ ){
                if (n%i==0){
                    flag=0 ;
                }
            }
        }
        if (flag==1){
            //printf("%d is a prime number\n",n);
            return 1;
        }
        else{
          ///  printf("%d is a not a prime number\n",n);
            return 0;
        }
    }
    

int factorial(int  n){
    if (n==0){
        return 1;
    }
    else if (n==1){
        return 1;
    }
    else{
        return n*factorial( n-1);
    }
}


int isStrong(int n){

    int x;
    int ans=0;
    int m=n;
    if (n==0){
        ans=1;
    }
    while (m>=1){
        x=m%10;
        ans=ans+factorial(x);
        m=m/10;
    }
    if (n==ans){
        // printf("%d is a strong number\n", n);
        return 1;
    }
    else{
        // printf("%d is not a string number\n", n);
        return 0;
    }
}



/*
int main (){

printf("%d\n",isPrime(0)); //false
printf("%d\n",isPrime(4)); //false
printf("%d\n",isPrime(1)); //false
printf("%d\n",isPrime(10)); //false
printf("%d\n",isPrime(-5)); //false
printf("%d\n",isPrime(29)); //true
printf("%d\n",isPrime(97)); //true
printf("%d\n",isPrime(89)); //true
  
//int x=factorial(5);
//printf( "5! = %d\n",x);

printf("%d\n",isStrong(145)); //true
printf("%d\n",isStrong(33)); //false

int start;
int end;
int x;
printf("plese pick a full number");
scanf("%d", &start);
printf("plese pick a full number bigger than the first");
scanf("%d", &end);
for (int i=start; i<=end;i++){
    x=isPrime(i);
    if (x==1){
        printf("%d,",i);
    }
}
printf("\n");
for (int i=start; i<=end;i++){
    x=isStrong(i);
    if (x==1){
        printf("%d,",i);
    }
}
printf("\n");

return(0);
}
*/
