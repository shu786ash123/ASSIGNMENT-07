#include<stdio.h>
int main()
{
    int x,count=0,a= -1,b=1,i,c;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf(" %d term of fibonacci series are:  \n",x);
    for(i=1;i<=x;i++)
        {
            c = a+b;
            
            a=b;
            b=c;
            printf(" %d \n " ,c);
        
            
        }
        
            return 0;
}