#include <stdio.h>

int pal(int *a,int len)
{
    
    int i,j;
    for(i=0,j=len-1;i<=j;i++,j--)
    {
        if(a[i]==10)
        {
            a[i]=0;                     // The 2 if statements check for corner test cases and correct them
            a[i-1]+=1;
        }
        if(a[j]==10)
        {
            a[j]=0;
            a[j-1]+=1;
        }
        if(a[i]==a[j])
        {
            i++;
            j--;                        // The array elements are modified as per logic
        }
        else if(a[i]>a[j])
        {
            a[j]=a[i];
        }
        else if(a[i]<a[j])
        {
            a[j]=a[i];
            a[j-1]+=1;
        }
    }
}    
int main(void) {
	int n,x,flag,len,i,j;
	scanf("%d",&n);                         
	x=n+1;                          //x=n+1 overcomes corner testcases like 99 and 999
	flag=0;
	len=0;                                  //initializing flag and length of array as zero
	while(x>0)
	{
	    len+=1;                             //length of array is calculated
	    x=x/10;
	}
	x=n+1;
	int a[len];
	for(i=(len-1);i>=0;i--)
	{
	    a[i]=(x%10);                        //the digits of the number are stored in array in order
	    x=x/10;
	}
	while(flag==0)
	{
	    pal(&a,len);                        //function call to modify the elements to form palindrome
	    for(i=0,j=len-1;i<=j;i++,j--)
	    {
	        flag=1;
	        if(a[i]!=a[j])                  //check if the palindrome number is generated. 
	        {
	            flag=0;
	            break;                      //the flag is not set until the palindrome generated
	        }
	    }
	    if(flag==1)
	    {   x=0;
	        for(i=0;i<len;i++)
	        {
	            x=(x*10)+a[i];          //final palindrome is rendered from the array
	        }
	        break;
	    }
	    
	}
	printf("%d",x);
	return 0;
}

