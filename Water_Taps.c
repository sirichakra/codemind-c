#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int time=(x*y)/(x+y);
    printf("%d",time);
}