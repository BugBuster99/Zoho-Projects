#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i,j,flag=0,count=1;
    scanf("%s",s);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;s[i]!='*' && j<l;j++)
        {
            if(s[i]==s[j])
            {
            count++;
            s[j]='*';
            }
        }
        if(s[i]!='*' )
        if((count%2)==1)
        {
            flag+=1;
        }
          count=1;
        if(flag>1)
        {
            printf("Palindrome combinations are not possible");
            return 0;
        }
    }
    printf("Palindrome combinations are possible");
    return 0;
}
