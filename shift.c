#include <stdio.h>
void main() {
	int rot,n,rem,shif,iter;
	iter=1;
	scanf("%d%d",&n,&rot);
	rot=rot%5;
	iter=5-rot;
	while(iter<m)
	{
		iter=iter*10;
	}
	rem=n/(iter);
	shif=n%(iter);
	shif=shif*(10*rot)+rem;
	printf("The shifted number is: %d",shif);
	
}

