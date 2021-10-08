/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  unsigned int age;

  printf("Enter your age=");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("User is eligible to vote");
  }
  else
  {
    printf("User is not eligible to vote");
  }
  return 0;
}


