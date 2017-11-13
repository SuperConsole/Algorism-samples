#include<stdio.h>

long int factorial(int n);

int main(void){
	int n=7;
	printf("n: %d / factorial n: %ld",n ,factorial(n));
}

long int factorial(int n){
	if(n==1)return 1;
	return n * factorial(n-1);
}
