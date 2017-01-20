#include <stdio.h>
int print(int *a,int *b,int n);
int comp(int *a,int *b,int n,int k);
int comp(int *a,int *b,int n,int k)
{
    if(k==(n-1))
    {
        b[k]=0;
        print(a,b,n);
        b[k]=1;
        print(a,b,n);
        return 0;
    }
    b[k]=0;
    comp(a,b,n,k+1);
    b[k]=1;
    comp(a,b,n,k+1);
}
int print(int *a,int *b,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            printf("%d,",a[i]);
        }
        
    }
    printf("\n");
    return 0;
}
int main()
{
    int n,i,k;
    k=0;
    scanf("%d",&n);
    int a[n],b[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    comp(a,b,n,k);
    return 0;
}
