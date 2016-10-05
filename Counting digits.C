#include <stdio.h>


int main(void)
 {
   
int n,count=0;
 
  scanf("%d",&n);
 
  while(n!=0)
  {

       n=n/10;

       count++;
 
  }

   printf("Number of digits in a number is %d",count);
	
return 0;

}

