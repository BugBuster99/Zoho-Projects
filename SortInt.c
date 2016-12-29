#include<stdio.h>
void main(){
    int n,temp,i,j,count,num,a[30];
    count=0;
    num=0;
    scanf("%d",&n);
    temp=n;
    
    while(temp>0){
        a[count]=temp%10;
        count++;
        temp=temp/10;
        
    }
    for(i=0;i<(count-1);i++){
        for(j=(i+1);j<count;j++){
            if (a[i]>a[j]){
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<count;i++){
        num=(num*10)+a[i];
    }
    printf("%d",num);
}
