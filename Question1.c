#include<stdio.h>

// num is a function which will calculate the number of tosses (n) on the basis of input as number of consecutive heads.
int num (int h)
{
    int n=0,i;
   for (i=1; i<=h; i++)
   {
       n = (n+1)*2;
   }
   return n;
}

int main ()
{
    int a;
    // a is input as number of consecutive heads we want
   
    printf("Enter the number of consecutive heads you want: ");
   
   scanf("%d",&a);

   printf("The number of tosses to get %d consecutive heads is %d",a,num (a));

return 0;
}