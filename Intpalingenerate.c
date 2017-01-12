#include<stdio.h>
void main(){
    int n,rev,i,a,rem,count;
    scanf("%d",&n);
    rev=0;
    count=0;
    a=n/10;
    while(a>0){
        rem=a%10;
        rev=rev*10+rem;
        count++;
        a=a/10;
    }
    i=1;
    while(count>0){
        i=i*10;
        count--;
    }
    rev=n*i+rev;
    printf("%d",rev);
    
}
