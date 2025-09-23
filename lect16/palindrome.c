#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int isTrue=1;
    for(int i=0;i<5/2;i++){
        if(arr[i] != arr[4-i]){
            isTrue = 0;
            break;
        }
    }
    if(isTrue){
        printf("The array is a palindrome\n");
    } else {
        printf("The array is not a palindrome\n");
    }
    return 0;
}