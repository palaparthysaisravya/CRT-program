#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    do{
        r=n%10;
        if(r%2==0)
            sum=sum+r;
        n=n/10;
    }
    while(n!=0);
    printf("the sum of even digits of a number is %d",sum);
    return 0;
}
