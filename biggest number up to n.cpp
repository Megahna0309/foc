#include<stdio.h>>
int main()
{
	int n,i,max=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i>max)
	max=i;		
	}
	printf("largest number upto %d",n,max);
	return 0;
	
}
