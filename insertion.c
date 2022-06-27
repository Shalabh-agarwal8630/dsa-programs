#include <stdio.h>
int main()
{
    int i,j,position,value,n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position \n");
    scanf("%d",&position);
    printf("enter the value to be inserted ");
    scanf("%d",&value);
    for(i=n-1;i>position-1;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;
    n++;
printf("the new array is \n ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;

}
