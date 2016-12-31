#include<stdio.h>
void main()
{
	int n,i,j,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	scanf("%d",&j);
	for(i=0;a[i]<=j;i++)
	{
		if(j==a[i])
		{
			count++;
		}
	}
	printf("%d",count);
}
