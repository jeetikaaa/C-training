#include <stdio.h>
int main(){

int arr[4]={1,2,3,4};
int *p=arr;
// 9intprintf("%d",*(p+2));
for(int i=0;i<4;i++){
    printf("%d",*(p+i));
}
return 0;
}