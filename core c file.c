#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int i,n;
 char ch,junk,choice;
 float total;
    printf("=========================================\n");
    printf("        C-STYLE WEB CALCULATOR         \n");
    printf("  Supported keys: [ +  -  *  /  !  @  . ]\n");
    printf("=========================================\n\n");
    float num[100];
 do{
 	    if(choice=='s'||choice=='S')
 	    {
 	    	n=0;
		}
		else if(choice=='c'||choice=='C')
		{
			num[0]=total;
			n=1;
			printf("Using the previous result as starter number: %.2f\n",total);
		}
		else if(choice=='e'||choice=='E')
		{
			printf("GOODBYE!!!THANK YOU FOR CHOOSING US.");
			break;
		}
 for(;n<100;n++)
   {
       printf("Enter the numbers: "); 
       if( scanf("%f",&num[n])!=1.00)
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
       total=num[0];
       printf("\nEnter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for Division\nEnter ! for force stop\n");
       printf("\nstarting the number with: %.2f\n",total);
for(i=1;i<n;i++)
{       
       printf("\nThe next number is: %.2f",num[i]);
       printf("\nEnter the operation: ");
       scanf(" %c",&ch);     
       switch (ch)
    {
        case '+':
           total+=num[i];
        printf("Running total: %.2f\n",total);
        break;
        case '-':
           total-=num[i];
        printf("Running total: %.2f\n",total);
        break;
        case '*':
           total*=num[i];
        printf("Running total: %.2f\n",total);
        break;
        case '/':
			if(num[i]==0)
			{
				printf("!!INVALID DIVISION!!");
				break;
			}
            total/=num[i];
        printf("Running total: %.2f\n",total);
        break;
        case '!':
        exit (0);
        default:
        printf("\nINVALID CHOICE!!! NUMBER SKIPPED;\n");
    }
 }
 printf("\n==========================\n");
 printf("  Final Result: %.2f\n",total);
 printf("==========================\n");
 
 printf("What do you want to do with result: ");
 printf("\nEnter 'c' if you want to calculate with the result");
 printf("\nEnter 's' if you want to start over");
 printf("\nEnter 'e' if you want to exit\n");
 printf("Enter your choice: ");
 scanf(" %c",&choice);
 
 printf("\n\n");
}while(1);
 return 0; 
}        
