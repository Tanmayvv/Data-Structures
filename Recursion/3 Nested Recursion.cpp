#include <stdio.h>

void fun(int n){
    if(n>100)
    	return n-10;
    else
    	return fun(fun(n+11));
}
int main()
{
	int r=0;
    r=fun(95);
    printf("%d", r);
    return 0;
}