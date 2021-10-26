#include<stdio.h>
#include<string.h>
void main(){
  char str[100];
  printf("enter the string\n");
  getS(str);
  printf("%c",str[0]);
  for(int i=0;str[i]!='\0';i++){
    if(str[i]==' ' && isupper (str[i+1]))
      printf("%c",str[i+1]);
  }
}
