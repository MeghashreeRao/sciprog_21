#include<stdio.h>
#include<math.h>

double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(){

	double precis;
	printf("Enter the precision for Maclaurin series : \n");
	scanf("%lf", &precis);

	double begin, end;
	printf("Enter the start and finish points for x:\n");
	scanf("%lf, %'lf", &begin, &end);

	double a = ((fabs(begin) + fabs(end))/precis) + 1.0;
	int asize = a;

	double tan1[asize];
	double tan2[asize];

	double i;
	int j = 0;

	for(i = begin; i<=end; i+=precis){
		
		tan1[j] = arctanh1(i, precis);
		tan2[j] = arctanh2(i);
		printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n",i , i, fabs(tan1[j] - tan2[j]));
		j++;

}

	return 0;
}

double arctanh1(const double x, const double delta){
	double arcTan = 0;
	double ele;
	int n = 0;

	do{

		double val = 2*n + 1;
		ele = pow(x, val)/val;
		arcTan += ele;
		n++;

	} while(fabs(ele) >= delta);
	return arcTan;
}

double arctanh2(const double x){
	return (log(1+x) - log(1-x))/2;
}
