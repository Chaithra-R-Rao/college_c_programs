#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sr,er,flag,i,j,c=0;

    printf("Enter the starting and ending range\n");
    scanf("%d%d",&sr,&er);
    printf("The prime numbers are\n");
    for(i=sr;i<=er;i++)
    {
        flag=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            c++;
            printf("%d\t",i);
        }
    }
   if(c==0)
       printf("\n\n NULL\n\nThere is no prime number within the range\n");
   else
       printf("\n\nThere are %d prime numbers within the range\n",c);

    return 0;
}
