#include <stdio.h>
int natural(int n){
    if(n<=100){
        printf("%d ",n);
        natural(n+1);
    }
}
int main(){
    int n=1;
    printf("all natural numbers are-");
    natural(n);
    
    return 0;
}