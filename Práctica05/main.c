#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a1,a2, z = 1, x= -1, c= -1;
	cuadratica(z,x,c,&a1,&a2);
	
	printf("%lf\n", a1);
	printf("%lf\n", a2);
	
	double coefs1[4] = [3,6,3,2];
	double coefs2[8] = [4,8,2,-6, 7, 8,5,10];
	
	sumarPolinomios()
	
	return 0;
}
