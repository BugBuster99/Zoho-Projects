#include <stdio.h>

int main(void) {
	int n,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(j=i;j<n;j++)
	    {
	        for(k=i;k<=j;k++)
	        {
	            printf("%d,",a[k]);
	        }
	        printf("\n");
	    }
	}
	
	return 0;
}

