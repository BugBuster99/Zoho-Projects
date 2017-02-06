#include<stdio.h>
#include<string.h>
int strcompare(char *x,char *y)
{
    int i;                              //function to compare two strings of equal length
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>y[i])
        {
            return 1;                   //if the a number is greater than next number in the string flag is set
        }
    }
	return 0;
}
int main(void) {
	// your code goes here
	int i,j,x,y,flag;
	flag=0;
	char a[10][4]={"123","123","112","1","97","7","45","69","100","29"};
	for(i=0;i<9;i++)
	{           
	    for(j=i+1;j<10;j++)
	    {
            x=strlen(a[i]);             //length of the strings are found
	        y=strlen(a[j]);
    	    if(x>y)
    	    {
    	        char temp[1][4];        //logic to swap un-equal sized strings
    	        strcpy(temp,a[i]);
    	        strcpy(a[i],a[j]);
    	        strcpy(a[j],temp);
    	    }
    	    else if(x==y)
    	    {
    	        flag=strcompare(a[i],a[j]);     //function to check equal sized strings
    	        if(flag==1)
    	        {
    	            char temp[1][4];
        	        strcpy(temp,a[i]);          //logic to swap equal sized strings if necessary
        	        strcpy(a[i],a[j]);
        	        strcpy(a[j],temp);
    	        }
    	    }
	    }
	}
	for(i=0;i<10;i++)
	{
	    printf("%s\n",a[i]);            //Strings are printed
	}
	return 0;
}
