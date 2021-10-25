#include<stdio.h>
void main(){
  int a[10][10],n=3;
  printf("enter the matrix\n");
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  for(int j=n-1;j>=0;j--){
    for(int i=0;i<n;i++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
}
