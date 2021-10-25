#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  int n;
  printf("Enter the size\n");
  scanf("%d",&n);
  int sum,c_sum;
  printf("Enter the sum\n");
  scanf("%d",&sum);
  printf("Enter the values\n");
  ptr = (int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
    scanf("%d",&ptr[i]);
  for(int i=0;i<n;i++)
  {
    c_sum = ptr[i]; 
    for(int j=i+1;j<n;j++)
    {
      if(sum == c_sum )
      {
        printf("Indices are %d and %d",i,j-1);
        exit(0);
      }
      else if(c_sum>sum || j==n)
        break;
      else
        c_sum = c_sum+ptr[j];
    }
  }
  printf("No substring is found\n");
}
