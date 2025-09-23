#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int *p =arr;
    for(int i =3 ;i>=0;i--){
        printf("%d",*(p+i));
    }
    return 0;
}