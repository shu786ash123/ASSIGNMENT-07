#include<stdio.h>
int main()
{
    int x,a= -1,b=1,i,c;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    for(i=1; 1;i++)
        {
            c = a+b;
            
            a=b;
            b=c;
         
        if(x==c){
        
            printf(" fibonacci series term ");.//one more time
            break;
        }
        if(c>x)
        {
            printf("not a term of fibonacci series ");
            break;
        }
        }
        
            return 0;
        
}