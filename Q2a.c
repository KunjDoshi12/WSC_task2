#include<stdio.h>

int main()
{
   float p,n,a;
   //Case 1, first draw to get a Jack
   n=13;

   //Case 2,2nd draw to get another jack p=3/51
   p=(3/51);
   a = (51*14)/3;
   printf("The number of of cards that need to be drawn to get two jacks is %.0f",a);
return 0;
}