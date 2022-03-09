#include <stdio.h>
 
void swap_twoNumbers(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}
 
int main()
{
   int x, y;
 
   scanf("%d",&x);
   scanf("%d",&y);
 
   swap_twoNumbers(&x, &y); 
 
   printf("%d\n",x);
   printf("%d",y);
 
  
}
