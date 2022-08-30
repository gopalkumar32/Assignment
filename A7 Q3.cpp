#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	printf("Entre the number\n");
	scanf("%d",&n);
	for(i=n;i>0;i++)
	{
		count=0;
		for(j=1;j<=1;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d",i);
		break;
	}
}
