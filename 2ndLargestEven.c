#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,k,size,m1,m2;
	scanf("%d",&size);                          //Get the size of array
	int a[size];
	for(i=0;i<size;i++)
	{
	    scanf("%d",&a[i]);                      //Getting the array elements
	}
	m1=0;                                       //two variables for storing first two maximum values
	m2=0;
	for(i=0;i<size;i++)
	{
	    if((a[i]%2)==0)
	    {                                       //First condition to filter even number from array
	        if(a[i]>m1)
	        {
	            m2=m1;
	            m1=a[i];                        //Second condition to update the maximum even values in m1 and m2
	        }
	    }
	}
	if(m1>m2)
	{
	    printf("%d",m2);                    //Printing the second least value
	}
	else
	{
	    printf("%d",m1);
	}
	return 0;
}

