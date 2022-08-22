#include<stdio.h>
int main()
{
    int x,y,sum=0,temp;
    printf("ENTER ANY THREE DIGIT NUMBER: \n");
    scanf("%d",&x);
    temp = x;
    while(x!=0)
    {
        y = x%10;
        sum = sum + y*y*y;
        x = x/10;
;    }
            x = temp;
        if(sum==x)
            printf("%d is a armstrong number",x);
        else
            printf("NOT A ARMSTRONG NUMBER");
}