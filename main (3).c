/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>

int main()
{

   int rank;
    printf("Enter the rank of the student\n");
    scanf("%d",&rank);
    if(rank<=3250)
    {
        printf("COURSE AVAILABLE FOR THIS RANK IS CSE,ISE,EANDC,Mech");}
        else if(3250<rank<=6505)
        {
            printf("COURSE AVAILABLE FOR THIS RANK IS ISE,EANDC,Mech");
        }
        else if(6505<rank<=12012)
        {
            printf("COURSE AVAILABLE FOR THIS RANK IS EANDC,Mech");
        }
        else if(12012<rank<=22340)
        {
            printf("COURSE AVAILABLE FOR THIS RANK IS MEC");
        }
        else if(rank>25000)
        {
            printf("NO COURSES AVAILABLE");
        }
    

    

    return 0;

}


