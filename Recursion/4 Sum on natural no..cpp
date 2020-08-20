#include <stdio.h>

void sum(int n){
    if(n==0)
    	return 0;
    else
    	return sum(n-1) + n;
}
int main()
{
	int r=0;
    r=sum(7);
    printf("%d", r);
    return 0;
}