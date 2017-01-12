#include <stdio.h>

int main(void) {
	int i,n,flag,temp;
	flag=0;
	scanf("%d",&n);
	temp=n+1;
	while(flag==0){
	    for(i=2;i<(temp/2);i++){
	        if((temp%i)==0){
	            flag=0;
	            
	            break;
	        }
	        else{
	            flag=1;
	        }
	    }
	    if(flag==1){
	        printf("%d",temp);
	    }
	    else{
	        temp++;
	    }
	}
	return 0;
}

