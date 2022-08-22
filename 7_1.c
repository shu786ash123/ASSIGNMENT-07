#include<stdio.h>
int main()
{
    int x,count=0,a= -1,b=1,i,c;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        {
            c = a+b;
            
            a=b;
            b=c;
            count++;
            if(count==x)
            printf("%d th term of fibonacci series is: %d\n ",x,c);
        
            
        }
        
            return 0;
}