#include <stdio.h>

int main(void) {
	int n,digits,i,j,temp;
	scanf("%d",&n);
	digits=0;
	temp=n;
	while(temp>0){
	    digits+=1;
	    temp=temp/10;
	}

	temp=n;
	
	int arr[digits];
	for(i=(digits-1);i>=0;i--){
	    arr[i]=(temp%10);
	    temp=temp/10;
	    
	}
	j=digits-1;
	i=0;
	while(i<=j){
	    
	    if(arr[i]!=arr[j]){
	        if(arr[i]>arr[j]){
	            arr[j]=arr[i];
	        }
	        else{
	            arr[j]=arr[i];
	            arr[j-1]+=1;
	        }
	    }
	    if(arr[i]==arr[j]){
	        i++;
	        j--;
	    }
	}
	for(i=0;i<digits;i++){
	    printf("%d",arr[i]);
	}
	return 0;
}

