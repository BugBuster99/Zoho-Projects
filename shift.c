#include <stdio.h>
void main() {
	int rot,n,rem,shif;
	scanf("%d%d",&n,&rot);
	while(rot>0)
	{
	    rem=n%10000;
	    shif=(rem*10)+(n/10000);
	    rot--;
	}
	printf("The shifted number is: %d",shif);
	
}

