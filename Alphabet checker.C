#include <stdio.h>

#include<ctype.h>


int main(void)
 {
	
char ch;
	
scanf("%c",&ch);
	
  if(isalpha(ch)==0)
	
   printf("%c is not an alphabet",ch);

  else
	 
  printf("%c is  an alphabet",ch);

  return 0;

}

