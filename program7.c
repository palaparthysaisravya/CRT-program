/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i,n,sum;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+(i*i);
}
printf("the sum of squares of numbers is :%d",sum);
    return 0;
}

