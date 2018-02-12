#include <stdio.h>
int main(void) 
{
	int a[100],b[100],c[100];
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(i%2==0)
		c[i]=a[i]/b[i];
		else
		c[i]=a[i]%b[i];
	}
	for(i=0;i<4;i++)
	{
		printf("\n%d",c[i]);
	}
	return 0;
}
