#include<stdio.h>
int main()
{
        int n,a,b,c;
        printf("ENtre the value of n\n");
        scanf("%d",&n);
        a=-1;
        b=1;
        for(int i=1;i<=n;i++)
        {
                c=a+b;
                printf("%d\t",c);
                a=b;
                b=c;
        }
}
