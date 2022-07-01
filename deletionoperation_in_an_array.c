#include <stdio.h>
int main(){
int n,i,value,index=-1;
printf("enter size");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the value");
scanf("%d",&value);

for(i=0;i<n;i++){
    if(a[i]==value){
        index=i;
        break;
    }
}
if(index!=-1){
    for(i=index;i<n-1;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }

}
else{
    printf("element not found");
    }
    return 0;
}




