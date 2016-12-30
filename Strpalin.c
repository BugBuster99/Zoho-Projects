#include<stdio.h>
void main(){
    int i,len,flag;
    char s[100];
    len=0;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++){
        len++;
    }
    for(i=0;s[i]!='\0';i++){
        if(s[i]!=s[(len-1)-i]){
            flag=1;
            break;
        }
            
        }
    
    if(flag==1){
        printf("Not a palindrome");
    }
    else{
        printf("It is a paindrome");
    }
}
