#include<stdio.h>
void read_arr(int arr[10],int arr_size)
{int i;
    for(i=0;i<arr_size;i++)
    {
         scanf("%d",&arr[i]);
    }
}
void print_arr(int arr[10],int arr_size)
{int i;
     for(i=0;i<arr_size;i++)
    {
         printf("%d\t",arr[i]);
    }
}
search(int arr[10],int arr_size,int key)
{int i,j,c;c=0;
    for(i=0;i<arr_size;i++)
    {
        if(arr[i]==key)
        {
            printf("search successful \n");
            printf("the first occurance of the key is= %d",(i+1));
            printf("\n");c++;
            break;
        }
    }
    for(j=arr_size;j>i;j--)
    {
        if(key==arr[j])
        {
            printf("the last occurance of the key is= %d",(j+1));
            break;
        }
    }
    if(c==0)
        printf("search unsuccessful");
}

int main()
{
    // array declaration 
    int arr[10], arr_size,key,pos[10];
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("enter the element to search");
    scanf("%d",&key);
    search(arr,arr_size,key);
    return 0;
}
