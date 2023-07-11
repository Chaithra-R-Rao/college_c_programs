//binary search//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],n,mid,low,high,i,key;
    printf("enter the value for n\n");
    scanf("%d",&n);
    printf("enter %d elements in ascending order\n",n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

     printf("Enter the key element to search\n");
     scanf("%d",&key);
     low=0;

     high=n-1;

     while(low<=high)
     {
         mid =(low+high)/2;
         if(a[mid]==key)
         {
             printf("The key is found at the position %d",mid);
             exit(0);
         }
         if(key>a[mid])
            low=mid+1;
         else
            high=mid-1;
     }
   printf("the key is not found\n");
  return 0;
}
