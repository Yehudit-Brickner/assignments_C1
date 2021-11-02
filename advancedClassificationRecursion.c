
# include <stdio.h>
/*# include <math.h>*/

int power(int base, int n){
    int ans=base;
    for (int i=0;i<n-1;i++){
        ans=ans*base;
    }
    return ans;
}



int isArmstrongRecursive(int n, int ans,int m, int countnow, int count){
    int x=0;
    if (countnow==count){
        if (ans==n){
            return 1;
         }
        else{
            return 0;
        }
    } 
    else{
        countnow=countnow+1;
        x=m%10;
        m=m/10;
        ans=ans+power(x, count);
        return isArmstrongRecursive(n,ans,m,countnow,count);
    }
}



int isArmstrong(int n){
    int count=0;
    int m=n;
    int ans=0;
    while (m>=1){
        m=m/10;
        count=count+1;
    }
    m=n;
    return isArmstrongRecursive(n, ans,m, 0, count);


}

int IsPolindromeRecursive(int start,int end,int arr[]){
    if (start>= end){
        return 1;
    }
    else{
     //   printf( "s=%d and e=%d\n",arr[start],arr[end]);
        if (arr[start]==arr[end]){
            start=start+1;
            end=end-1;
            return IsPolindromeRecursive(start,end,arr);
        }
        else{
            return 0;
        }
    }
}




int isPalindrome(int n){
    int m=n;
    int count=0;
    while (m>=1){
        m=m/10;
        count=count+1;
    }
    int arr[count];
    m=n;
    for (int i=0; i<count; i++){
        arr[i]=m%10;
        m=m/10;
       // printf("%d,",arr[i]);
    }
//printf("\n");
return IsPolindromeRecursive(0,count-1,arr);

}


/*
int main(){

printf("%d\n",isArmstrong(407)); //true
printf("%d\n",isArmstrong(8208)); //true
printf("%d\n",isArmstrong(9474)); //true
printf("%d\n",isArmstrong(370)); //true
printf("%d\n",isArmstrong(567)); //false
printf("%d\n",isArmstrong(159)); //false
printf("%d\n",isPalindrome(121)); //true
printf("%d\n",isPalindrome (456654)); //true
printf("%d\n",isPalindrome (456754)); //false
printf("%d\n",isPalindrome (123456)); //false

int start;
int end;
int x;
printf("plese pick a full number");
scanf("%d", &start);
printf("plese pick a full number bigger than the first");
scanf("%d", &end);
for (int i=start; i<=end;i++){
    x=isArmstrong(i);
    if (x==1){
        printf("%d,",i);
    }
}
printf("\n");
return(0);

}
*/
