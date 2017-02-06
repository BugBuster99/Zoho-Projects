#include <stdio.h>
#include<string.h>
int strcompare(char *x,char *y)
{
    int i;
    for(i=0;x[i]!='\0';i++)
    {
        if(strcmp(x[i],y[i])>=1)
        {
            return 1;
        }
    }
}
int main(void) {
	// your code goes here
	int i,j,x,y,flag;
	flag=0;
	char a[10][4]={"123","23","12","5","7","78","45","69","100","99"};
	for(i=0;i<9;i++)
	{
	    for(j=i+1;j<10;j++)
	    {
            x=strlen(a[i]);
	        y=strlen(a[j]);
    	    if(x>y)
    	    {
    	        char temp[1][4];
    	        strcpy(temp,a[i]);
    	        strcpy(a[i],a[j]);
    	        strcpy(a[j],temp);
    	    }
    	    else if(x==y)
    	    {
    	        flag=strcompare(a[i],a[j]);
    	        if(flag==1)
    	        {
    	            char temp[1][4];
        	        strcpy(temp,a[i]);
        	        strcpy(a[i],a[j]);
        	        strcpy(a[j],temp);
    	        }
    	    }
	    }
	}
	for(i=0;i<10;i++)
	{
	    printf("%s\n",a[i]);
	}
	return 0;
}

