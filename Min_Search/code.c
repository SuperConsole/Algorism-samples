#include<stdio.h>

int main(void){
	double a[10]={4.11,5.4,3.3,6.65,3,4,6,9,2.098,7};
	double min = a[0];
	int index=0;
	while(index < 10){
		if(a[index] < min )min=a[index];
		index++;
	}
	printf("min:%f",min);
}
