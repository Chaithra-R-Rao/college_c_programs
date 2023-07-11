#include <stdio.h>
#include <stdlib.h>

void linear(int a[],int,int);
int main()
{
    int a[100],i,n,key;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("\nThe elements are:");
    for(i=0;i<n;i++)
     printf("%d\t",a[i]);
    printf("Enter the key element:");
    scanf("%d",&key);
    linear(a,n,key);
     return 0;
}
void linear (int a[100],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
   {
     if(a[i]==key)
        {
         printf("The element found at position %d",i+1);
         exit(0);
        }
   }
   printf("\nKey element not found");
   return;

}
