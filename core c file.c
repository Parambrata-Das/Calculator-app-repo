#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int i,n;
 char ch;
 int total;
 '(char +,-,*,/,!)';
 printf("Enter the number of elements you want to calculate: ");
 scanf("%d",&n);
 int num[n];
 
 for(i=0;i<n;i++)
   {
       printf("\nEnter the numbers: "); 
       scanf("%d",&num[i]);
   }
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
				return 1;
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
