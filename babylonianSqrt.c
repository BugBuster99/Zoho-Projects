#include <stdio.h>

int main(void) {
	int n,i;
    scanf("%d",&n);
    float guess,sroot,new_guess;
    guess=n/2;
     while((guess*guess)>n)
    {
        guess=guess/2;
    }
    
    for(i=0;i<20;i++)
    {
        new_guess=n/guess;
        sroot=(guess+new_guess)/2;
        guess=sroot;
    }
    printf("%f",sroot);
	return 0;
}

