#include <stdio.h>

int fib(int n){
	
	if(n<=1)
	   	return n;
	else
    	return fib(n-2)+fib(n-1);
    	
}
int main()
{
    printf("%d ", fib(5));
    return 0;
}

# OR use memoisation


int F[10];
int fib(int n){
	
	    if(n<=1){

	    	F[n] = n;
	    	return n;
	    }
    	
    else{

    	if(F[n-2]==-1)
    		F[n-2]=fib(n-2);
    	if(F[n-1]==-1)
    		F[n-1]=fib(n-1);
    	return F[n-2]+F[n-1];
    }
    	
}
int main()
{
	for(int i =0; i<10; i++)
		F[i]=-1;
    printf("%d ", fib(5));
    return 0;
}
