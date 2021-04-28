#include <stdio.h>
#define maxsize 100  
#define maxchar 255 


int main()
{
    char str[maxsize];
    int freq[maxchar]; 
    int i = 0, max;
    int ascii;

    printf("Enter any string: ");
    gets(str);
    for(i=0; i<maxchar; i++)
    {
        freq[i] = 0;
    }
    
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    max = 0;
    for(i=0; i<maxchar; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }


    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);

    return 0;
}
