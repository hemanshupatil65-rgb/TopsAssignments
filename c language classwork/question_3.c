//wap to find simple interest.//

#include<stdio.h>
int main(){
	float p,r,t,si;
	printf("enter the value of p:");
	scanf("%f",&p);
	printf("enter the value of r:");
	scanf("%f",&r);
	printf("enter the value of t:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("your simple interest is:%f",si);
	return 0;
}
