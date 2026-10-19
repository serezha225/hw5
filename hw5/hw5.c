#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_CTYPE, "RUSSIAN");

	double x=0, y=0;
	double z = 0.512;

	printf("\n¬ведите x\n");
	scanf(" %lf", &x);
	printf("\n¬ведите y\n");
	scanf(" %lf", &y);

	double a = pow(2,-x) * sqrt(x+pow(fabs(y),0.25)) * pow(exp(x-1/sin(z)), 1.0/3.0);
	
	printf("\na = %.5lf\n", a);
	return 0;
}