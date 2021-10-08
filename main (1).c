/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int num1, num2;
  
    printf("Please Enter Two different values\n");
    
    scanf("%d %d", &num1, &num2);
    (num1 >= num2)?((num1 ==num2)?printf("Both numbers are equal"):printf("%d is Largest\n", num1)):printf("%d is Largest\n", num2);
    
    return 0;
}

