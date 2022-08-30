#include<stdio.h>
int main()
{
        int a,b,i,m;
        printf("Entre two number\n");
        scanf("%d%d",&a,&b);
        m=a>b?b:a;
        for(i=2;i<=a>b?b:a;i++)
        {
                if(a%i==0&b%i==0)
                { 
                        printf("not co-prime number");
                break;
                }
        }
        if(i==m+1)
        printf("co-prime number");
        
}
