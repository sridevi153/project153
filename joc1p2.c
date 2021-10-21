#include<stdio.h>
void main(){
int arr[10],size,count,freq[20];
int i,j,n=10;
printf("enter the array elements\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
freq[i]=-1;
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(arr[i]==arr[j]){
count++;
freq[i]=0;
}
}
if(freq[i]!=0){
freq[i]=count;
}
}
printf("the freauency of each elements in the array is\n");
for(i=0;i<n;i++){
if(freq[i]!=0){
printf("%d's:%d\n",arr[i],freq[i]);
}
}
}
