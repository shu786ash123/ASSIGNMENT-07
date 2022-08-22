#include<stdio.h>
int main()
{
    int n,i,flag=0,a;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&a);
    printf("next prime number of %d is: \n",a);

    for(n=a+1;1;n++)
    {       flag = 0;
        for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                    flag = 1;
            }
        if(flag == 0){
            printf("%d ",n);
            break;  
        }
    }
    return 0;
}