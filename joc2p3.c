#include<stdio.h>
#include<stdlib.h>
void main(){
  int arr[6],i,j;
  int a,b;
  int k=5;
  int n=6;
  printf("enter the elements in the array\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<n;i++){
    a=i;
    for(j=i+1;j<n;j++){
      b=j;
      if(arr[i]+arr[j]==k){
        printf("indices are found at %d and %d \n",a,b);
      }
    }
  }
}
