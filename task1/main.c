#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double a;
	double f;
	double h;
	scanf("%lf %lf",&a,&h);
	double y=a ;
	double x=0.001;
	double i;
	do{
		f=(1-h)*y;
		printf("µ±x=%f,y=%f\n",x,f);
		x+=h;
		i=y-f;
		y=f;
	}while(i>0.001*h);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

