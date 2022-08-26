#include <stdio.h>
int sumofn(int n){
    int r;
    if(n==1){
        return 1;
        
    }
    else{
         r=n + sumofn(n-1);
          return (r);
}
    }
   
int main(){
    int n,sum;
    printf("enter no");
    scanf("%d",&n);
    sum=sumofn(n);
    printf("sum of n natural numbers is- %d",sum);
    return 0;
}
