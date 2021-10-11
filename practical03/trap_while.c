#include<stdio.h>
#include<math.h>

int main(){
	
	int N=12;
	float a = 0.0, b_deg=60.0;
	
	//Convert b=pi/3 to radius
	float b_rad;
	b_rad = (M_PI * b_deg)/180.0;
	printf("pi/3 radians = %f\n", b_rad);

	//Sum(tan a + tan b) where a and b are in radians
	float area = tan(a) + tan(b_rad);
	printf("Initial area (sum at x(0) and x(12) = %f\n", area);

	//Using the given formula in the while loop
	int i=5;
	while(i<60){
		area=area+2*tan((M_PI*i)/180.0);
		if(i%2==0){
			printf("New are of x(%d) = %f\n", i/5, area);
		}
		i=i+5;
	}

	//Multiply with b-a/2N
	float mult_rad=M_PI*((b_deg-a)/(2*N))/180.0;
	area=mult_rad*area;

	//Approximated value
	printf("\nTrapeodial Result=%f\n",area);
	//Actual Result
	printf("Real Result=%f\n",log(2.0));

return 0;
}
