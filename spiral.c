#include <stdio.h>
int forward(int i,int n)
{
    int j;
    for(j=1;j<=n;j++,i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
int reverse(int i,int n)
{
    int j;
    for(j=i+n-1;j>=i;j--)
    {
        printf("%d ",j);
    }
    printf("\n");
    return 0;
    
}

int main(void) {
	// your code goes here
	int i,n,j,limit;
	i=1;
	j=1;
	scanf("%d",&n);
	if(n%2==0)
	{
	    limit=n/2;
	}
	else
	{
	    limit=(n/2)+1;
	}
	while(j<=limit)
	{
	    forward(i,n);
	    i=i+n;
	    reverse(i,n);
	    i=i+n;
	    ++j;
	    
	}

	return 0;
}

