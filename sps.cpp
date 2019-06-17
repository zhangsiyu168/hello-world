#include<stdio.h>
int is_prime(int x) {
	int i;
	if(x==1||x==0) return 0;
	if(x==2||x==3) return 1;
	for(i=2; i<x; i++) {
		if(x%i==0) return 0;
	}
	if(i==x) return 1;
}
int main() {
	int qua=0,sum=0,max,a,b,c;
	int d[15];
	for(int i=999; i>=100; i--) {
		a=i/100;
		b=(i-100*a)/10;
		c=i-100*a-10*b;
		if(is_prime(i)&&is_prime(a+b+c)&&is_prime(a*b*c)&&is_prime(a*a+b*b+c*c)) {
			sum+=i;
			d[qua++]=i;
		}
	}
	printf("quantity: %d\nsum: %d\nmax: %d\n",qua,sum,d[0]);
	return 0;
}
