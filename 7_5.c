#include<stdio.h>
int main()
{
    int a,b,H;
    printf("ENTER TWO NUMBER: \n");
    scanf("%d%d",&a,&b);//AGAIN TRY@@@##
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0 && b%H==0)
         { 
             if(H==1)
                printf(" both no. %d and %d is co prime no.",a,b);
            else
                printf(" both is not a coprime number");    
                    break;
         }
    }    
}