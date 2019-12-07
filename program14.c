#include <stdio.h>
int main()
{
int n,min=9,r;
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    if(r<min)
    {
        min=r;
    }
    
    n=n/10;
}
printf("min is :%d",min);
    return 0;
}