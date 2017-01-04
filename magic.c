#include <stdio.h>

int main(void) {
	int i,j,total,count,n;
	scanf("%d",&n);
	total=n*n;
	count=1;

	int a[n][n];
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        a[i][j]=0;
	    }
	}
	i=0;
	j=n/2;
	while(count<=total){
	    a[i][j]=count;
	    i-=1;
	    if(i<0){
	        i=n-1;
	    }
	    if((j+1)>(n-1)){
	        j=(j+1)%n;
	    }
	    else{
	        j=j+1;
	    }
	    if(a[i][j]!=0){
	        j-=1;
	        if(j<0){
	            j=n-1;
	        }
	        i=(i+2)%n;
	    }
	    count++;
	}
	
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	}    
	    
	return 0;
}

