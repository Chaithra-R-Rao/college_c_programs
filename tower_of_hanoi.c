#include <stdio.h>
#include <stdlib.h>

void main()
{
 int n;
 printf("Enter the number of discs\n");
 scanf("%d",&n);
 /* Transfer n disks from peg A to peg C */
  transfer(n, 'A', 'B', 'C');
}
void transfer(int n,char s,char t,char d)
{
    if(n==0)
        return;
    transfer(n-1,s,d,t);
    printf("Move disk %d from %c to %c\n",n,s,d);
    transfer(n-1,t,s,d);
}
