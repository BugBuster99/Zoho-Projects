#include <stdio.h>

int main(void) {
	int n,digits,i,j,temp;
	scanf("%d",&n);
	digits=0;
	temp=n;
	while(temp>0){                   //Finding the number of digits
	    digits+=1;
	    temp=temp/10;
	}
	temp=n;	
	int arr[digits];
	for(i=(digits-1);i>=0;i--){	//Storing the digits in an array
	    arr[i]=(temp%10);
	    temp=temp/10;
	    
	}
	j=digits-1;
	i=0;
	while(i<=j){				//comparing the digits in the array
	    
	    if(arr[i]!=arr[j]){
	        if(arr[i]>arr[j]){		//rearranging the digits such that form the next palindrome
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
	temp=0;
	for(i=0;i<digits;i++){
	    temp=temp*10+arr[i];		//The re-arranged array contents are extracted to form the final required integer
	}
	printf("%d",temp);
	return 0;
}

