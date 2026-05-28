#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int i,n;
 char ch,junk;
 int total;
 '(char +,-,*,/,!,@)';
 printf("NOTE 1: Enter the number one by one don't overpress!!!\n");
 printf("NOTE 2: You can only calculate upto 100 numbers.\n");
 printf("NOTE 3: Enter '@' when you finished typing all the numbers.\n");
 int num[100];
 
 for(n=0;n<100;n++)
   {
       printf("\nEnter the numbers: "); 
       if( scanf("%d",&num[n])!=1)
       {
       	    break;
	   }
    }
	   if(n==0)
	   {
	   	    printf("No number entered!!!\n");
	   	    return 1;
	   }
       scanf(" %c",&junk);
       printf("\nNOTE: YOU CAN PERFORM ONE OPERATION AT A TIME; UPDATE COMING SOON !!!");
       printf("\nEnter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for Division\nEnter ! for exit\n");
 do{       
       printf("\nEnter the operation: ");
       scanf(" %c",&ch);     
       if(ch=='+')
       {
       	total=0;
	   }
	   else if(ch=='*')
	   {
	   	total=1;
	   }
	   else
	   {
	   	total=num[0];
	   }
       switch (ch)
    {
        case '+':
       	for(i=0;i<n;i++)
		{
           total+=num[i];
		}
        printf("\n%d\n",total);
        break;
        case '-':
        for(i=1;i<n;i++)
		{
           total-=num[i];
		}
        printf("\n%d\n",total);
        break;
        case '*':
        for(i=0;i<n;i++)
		{
           total*=num[i];
		}
        printf("\n%d\n",total);
        break;
        case '/':
        for(i=1;i<n;i++)
		{
			if(num[i]==0)
			{
				printf("!!INVALID DIVISION!!");
				break;
			}
            total/=num[i];
		}
        printf("\n%d\n",total);
        printf("NOTICE: THE OUTPUT ONLY COMES IN INTEGERS; UPDATE COMING SOON\n");
        break;
        case '!':
        exit (0);
        default:
        printf("\nINVALID CHOICE!!!\n");
    }
 }while (1); 
 return 0; 
}        
