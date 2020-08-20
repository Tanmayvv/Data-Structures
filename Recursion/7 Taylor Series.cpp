#include <stdio.h>

// finding e^m by calculating n times

double e(int m, int n){
	static double p=1, f=1;
	double r;
    if(n==0)
    	return 1;
    else{
    	r=e(m, n-1);
    	p*=m;
    	f*=n;
    	return r+p/f;
    }
    	
}
int main()
{
    printf("%lf ", e(1,10));
    return 0;
}

