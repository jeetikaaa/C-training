#include <stdio.h>
#include <limits.h>

int maxSum=INT_MIN;
         // int arr[7]={-1,2,4,5,-4,3,-7};
     for(int i=0;i<=n-k;i++){
         int currSum=0;
         for(int j=i;j<i+k;j++){
             currSum=currSum+arr[j];

         }
         if(currSum>maxSum){
             maxSum=currSum;
      }
     }
     return maxSum;