#include<stdio.h>
int main()
{
    int n,i,flag=0,a,b;
    printf("ENTER TWO NUMBER: \n");
    scanf("%d %d",&a,&b);
    printf("prime number between %d and %d is: \n",a,b);

    for(n=a;n<=b;n++)
    {       flag = 0;
        for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                    flag = 1;
            }
        if(flag == 0)
            printf("%d ",n);    
    }
    return 0;
}