#include <stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter a number");
    scanf("%d",&n);
    a:
    while(n!=0)
    {
    r=n%10;
    sum=sum+r;
    n=n/10;
    }
    if(sum>9)
    {
        n=sum;
             printf("\n n is : %d",n);
        sum=0;
        goto a;
    }
    printf("sum is: %d",sum);
        return 0;
}

