#include <stdio.h>
void main() {
	int rot,n,rem,shif;
	scanf("%d%d",&n,&rot);
	rot=rot%5;
	iter=5-rot;
	rem=n/(10*iter);
	shif=n%(10*iter);
	shif=shif*(10*rot)+rem;
	printf("The shifted number is: %d",shif);
	
}

