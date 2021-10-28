 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int sqr=num*num;
    int flag=0;
   while(num>0)
   {
       if(num%10 != sqr%10)
         {
           flag=-1;
           break;
         }

       num=num/10;
       sqr=sqr/10;
   }
   if(flag==0)
    printf("It is an Automorphic Number");
   else
    printf("It is not an Automorphic Number");
}
