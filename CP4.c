#include<stdio.h>
int main()
{
	float n1,n2,add,sub,mul,div;
	printf("enter number1: ");
	scanf("%f",&n1);
	printf("enter non zero number2: ");
	scanf("%f",&n2);
	add=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	printf("%.2f + %.2f = %.2f\n",n1,n2,add);
	printf("%.2f - %.2f = %.2f\n",n1,n2,sub);
	printf("%.2f * %.2f = %.2f\n",n1,n2,mul);
	printf("%.2f / %.2f = %.2f\n",n1,n2,div);
	return 0;
}
