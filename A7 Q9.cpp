#include<stdio.h>
int main()
{
        int num,r,c,n;
        printf("Entre the number\n");
        scanf("%d",&n);
        num=n;
        c=0;
        while(num)
        {
                r=num%10;
                c=c+r*r*r;
                num=num/10;
        }
        if(n==c)
        printf("%d is armstrong number",num);
        else
        printf("%d is not armstrong number",num);
}
