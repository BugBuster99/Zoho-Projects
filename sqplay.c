#include<stdio.h>
void main()
{
	char a[4][4];
	char ch=' ';
	int i,j,k,l;
	i=49;
	for(k=0;k<4;k++)
	{
		for(l=0;l<4;l++)
		{
			a[k][l]=i;
			i++;
		}
	}
	i=3;
	j=3;
	a[i][j]=' ';
	do 
	{
		for(k=0;k<4;k++)
		{
			for(l=0;l<4;l++)
			{
				printf("%c\t",a[k][i]);
			}
			printf("\n");
		}
		printf("\n\nU-up D-down L-left R-right\nEnter Your choice:");
		scanf("%c",&ch);
		switch(ch)
		{
			case 'U':
			a[i][j]=a[i%4-1][j];
			i=i%4-1;
			a[i][j]=' ';
			break;
			case 'D':
			a[i][j]=a[i%4+1][j];
			i=i%4+1;
			a[i][j]=' ';
			break;
			case 'L':
			a[i][j]=a[i][j%4-1];
			j=j%4-1;
			a[i][j]=' ';
			break;
			case 'R':
			a[i][j]=a[i][j%4+1];
			j=j%4+1;
			a[i][j]=' ';
			break;
			case 'Q':
			break;			
		}
	}while(ch != 'Q');
}
