#include<stdio.h>

int main()
{
   float p,n,a;
   //Case 1, first draw to get an ace
   n=13;

   //Case 2,2nd draw to get a jack
   p=(4/51);
   a = (51*14)/4;
   printf("The number of of cards that need to be drawn to get an Ace and and a Jack is %.0f",a);
return 0;
}