/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{char Operator;
	float num1, num2, result = 0;
	
	printf("\n Please Enter an Operator (+, -, *, /)  :  ");
  	scanf("%c", &Operator);
  	
	printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
  	scanf("%f%f", &num1, &num2);
  	
  	switch(Operator)
  	{
  		case '+':
  			result = num1 + num2;
  			break;
  		case '-':
  			result = num1 - num2;
  			break;  			
  		case '*':
  			result = num1 * num2;
  			break;
  		case '/':
  			result = num1 / num2;
  			break;
		default:
			printf("\n You have enetered an Invalid Operator ");				    			
	}
  
	printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);
	
  	return 0;
   

    return 0;
}

