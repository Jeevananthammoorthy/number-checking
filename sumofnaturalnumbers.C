#include <stdio.h>


int main(void) 
{
   
int n,temp=0,i;
 
  scanf("%d",&n);


if(n!=0)
{   for(i=n;i>0;i--)

   temp=temp+i;

   printf("%d",temp);
}
else
{
printf("Enter the non zero number");
}

	return 0;

}

