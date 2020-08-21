#include <stdio.h>

int com(int n, int r){
	
	if(r==0)
	   	return 1;
	if(n==r)
		return 1;
	else
    	return com(n-1, r-1)+com(n-1, r);
    	
}
int main()
{
    printf("%d ", com(5,3));
    return 0;
}

