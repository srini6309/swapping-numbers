#include<stdio.h>
int main()
{
 int x=7,y=9;
 x=x+y;
 y=x-y;
 x=x-y;
 printf("after swapping: x=%d,y=%d",x,y);
return 0;
}
