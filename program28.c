// example of post and pre increments
#include <stdio.h>
int main()
{
int a=5,b=5,c=3;
a=a++ + a++ + a++;
b=++b + ++b + ++b;
c = c++ + ++c;
printf("post incre:%d",a);
printf("\npre incre: %d",b);
printf("\n post and pre: %d",c);
return 0;
}
