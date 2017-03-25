#include <stdio.h>

int main(void) {
	// your code goes here
	int i,a,n,d,sum;
	
	scanf("%d%d%d",&a,&d,&n);
	sum=a;
	printf("%d ",a);
	for(i=1;i<n;i++)
	{
	    sum=sum+d;
	    printf("%d ",sum);
	}
	return 0;
}

