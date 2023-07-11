//C program to find if a given string is a palindrome or not//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100],str2[100];
    int i,n;
    printf("Enter the string \n");
    gets(str1);

    n=strlen(str1);

    for(i=0;i<n;i++)
       str2[n-i-1]=str1[i];

    str2[i]='\0';

    if(strcmpi(str1,str2)==0)

        printf("the given string is a palindrome\n");

    else
        printf("the given message is not palindrome");

    return 0;
}
