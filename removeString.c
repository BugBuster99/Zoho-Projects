#include <stdio.h>
#include<string.h>

int main(void) {
	char s[100],s1[100];
	scanf("%s",&s);
	int i,j;
	j=0;
	for(i=0;s[i]!='\0';i++){
	    if( (s[i]>65) && (s[i]<=90) || (s[i]>97) && (s[i]<=122)){
	        if((s[i]!=69) && (s[i]!=73) && (s[i]!=79) && (s[i]!=85) && (s[i]!=101) && (s[i]!=105) && (s[i]!=111) && (s[i]!=117)){
	        s1[j]=s[i];
	        j++;
	        }
	    }
	}
	for(i=0;i<j;i++){
	    printf("%c",s1[i]);
	}
	return 0;
}

