#include<stdio.h>
#include<string.h>
int main()
{
    
    char str1[100], str2[100];
    int length=0,i,j,t=0;
    gets(str1);
    //calculating length of string1
    while(str1[length]!='\0')
    {
        length++;
    }

    //reversing 
    for (i=length-1, j=0; i>=0, j<length; i--, j++)
    {
        str2[i]=str1[j];
    
    if(str2[i]!=str1[i])
        {
            printf("No\n"); 
            
        }
    
    
    else{
        printf("Yes\n");
    }
    }
    
    
    return 0;

}