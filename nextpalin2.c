#include <stdio.h>

int pal(int *a,int len)
{
    
    int i,j;
    for(i=0,j=len-1;i<=j;i++,j--)
    {
        if(a[i]==10)
        {
            a[i]=0;
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
            j--;
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
	x=n;
	flag=0;
	len=0;
	while(x>0)
	{
	    len+=1;
	    x=x/10;
	}
	x=n;
	int a[len];
	for(i=(len-1);i>=0;i--)
	{
	    a[i]=(x%10);
	    x=x/10;
	}
	while(flag==0)
	{
	    pal(&a,len);
	    for(i=0,j=len-1;i<=j;i++,j--)
	    {
	        flag=1;
	        if(a[i]!=a[j])
	        {
	            flag=0;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        for(i=0;i<len;i++)
	        {
	            printf("%d",a[i]);
	        }
	        break;
	    }
	    
	}
	return 0;
}

