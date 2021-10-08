/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int qty,dis;
    float rate,total;
    printf("enter the rate and qty\n");
    scanf("%f %d", &rate ,&qty);
    if(qty<10000)
    {
        printf("no discount\n");
    }
else if(10000<qty<=15000)
{
    dis = (qty * rate)*10/100;

}
total=(rate*qty)- dis;
printf("total paid is %f\n",total);




    return 0;
}

