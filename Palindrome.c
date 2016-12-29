#include<stdio.h>
void main(){
    int n,a,pal,rem,temp;
    pal=0;
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        pal=(pal*10)+rem;
        temp=temp/10;
    }
    if(pal==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
