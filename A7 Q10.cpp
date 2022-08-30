#include<stdio.h>
int main()
{
        int n,sum,r,i;
        for(i=1;i<=1000;i++)
        {
                n=i;
                sum=0;
                while(n)
                {
                        r=n%10;
                        sum=sum+r*r*r;
                        n=n/10;
                        if(i==sum)
                        printf("%d\t",i);
                }
                
        }
}
