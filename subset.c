#include <stdio.h>
#include<math.h>
void compute(int *s, int size)
{
    int total;
    total=pow(2,size);                      //the limit of the binary counter is computed here
    int bcount,i;
    for(bcount=0;bcount<total;bcount++)
    {
        for(i=0;i<size;i++)                     
        {
            if((1<<i) & bcount )        // the counter value is compared bitwise with 1 left shifted 'i' times
            {
                printf("%d,",s[i]);     // the bits in the array are printed corresponding to the bits of the counter 
            }
        }
        printf("\n");
    }
}
int main(void) {
	int s[100];                                //input set is obtained as character array
	int i,size;
	scanf("%d",&size);                             //size of the array is obtained
	for(i=0;i<size;i++)
	{
	    scanf("%d",&s[i]);                     
	}
	
	compute(s,size);                            //the array and it's size are passed as arguments to the function
	return 0;
}

