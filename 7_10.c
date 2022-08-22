#include<stdio.h>
int main()
{
    int x,y,sum,temp,n;
    for(n=1;n<=1000;n++)
    {    sum=0;
        x = n;
    while(x!=0)
    {
        y = x%10;
        sum = sum + y*y*y;
        x = x/10;
    }
            if(sum == n)
            printf("%d  \n",n);
}
return 0;
}