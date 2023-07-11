#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,m,n,b[100][100],trace=0;
    printf("Enter the row size and column size:");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements for %d x %d matrix:\n",m,n);
     for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    printf("The elements are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<m;i++)
     for(j=0;j<n;j++)
     b[j][i]=a[i][j];
     printf("The transpose of the matrix is\n");
  for(i=0;i<n;i++)
  {
     for(j=0;j<m;j++)
     {
         printf("%d\t",b[i][j]);
     }
     printf("\n");
  }
  if(m==n)
  {
      for(i=0;i<n;i++)
      {
            trace=trace+b[i][i];

      }
          printf("The trace is %d\n",trace);
  }
      else
        printf("Cant perform trace because it is not a square matrix\n");

    return 0;
}
