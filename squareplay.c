#include<stdio.h>
void main()
{
	char a[4][4];
	char ch=' ';
	int i,j,k,l;
	i=1;
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
    for(k=0;k<4;k++)
	{
	    printf("-------------------\n|");
		for(l=0;l<4;l++)
		{
		    if(a[k][l]==32)
		    {
		        printf(" %c |",a[k][l]);
		    }
		    else
		    {
			    printf(" %d |",a[k][l]);
		    }
		}
		printf("\n");
	}	
	while (ch!='Q')
	{
		printf("\n\nU-up D-down L-left R-right\nEnter Your choice:");
		scanf("%c",&ch);
		printf("\n");
		switch(ch)
		{
			case 'U':
			a[i][j]=a[3-(i%4)][j];
			i=3-(i%4);
			a[i][j]=' ';
			break;
			case 'D':
			a[i][j]=a[(i+1)%4][j];
			i=(i+1)%4;
			a[i][j]=' ';
			break;
			case 'L':
			a[i][j]=a[i][3-(j%4)];
			j=3-(j%4);
			a[i][j]=' ';
			break;
			case 'R':
			a[i][j]=a[i][(j+1)%4];
			j=(j+1)%4;
			a[i][j]=' ';
			break;
			case 'Q':
			break;			
		}
        for(k=0;k<4;k++)
	    {
	        printf("-------------------\n|");
    		for(l=0;l<4;l++)
    		{
    		    if(a[k][l]==32)
	    	    {
		            printf(" %c |",a[k][l]);
		        }
    		    else
    		    {
	    		    printf(" %d |",a[k][l]);
	    	    }
		    }
		    printf("\n");
	    }	
	}
}		
