#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Defining factorial function for the polynomial terms
int factorial(int n){

	int i;
	int fact=1;

	if(n==0)
		return 1;
	
	//Calculating factorial
	for(i=1; i<=n; i++)
		fact = fact * i;

	//returning the factorial
	return fact;
}

//defining function to find the polynomial
double poly(int n, int x){

	//declaring variables
	double sum=0.0;
	int i;

	//loop for summing the terms
	for(i=0; i<=n; i++)
		sum = sum + (double)pow(x,i) / factorial(i);

	return sum;
}

int main(){

	//declaration of variables
	int poly_order;
	int array_size;

	//declaring a pointer for each rray terms
	double* array_of_terms;
	int i, x = 1;

	//taking input
	printf("Enter the order of the polynomial: ");
	scanf("%d", &poly_order);

	//defining array size and terms
	array_size = poly_order + 1;
	array_of_terms = (double *) malloc(array_size * sizeof(double));

	//loop to display the terms
	for(i = 0; i<array_size; i++){
		array_of_terms[i] = poly(i,x);
		printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
	}
	
	printf("e1 = %0.20f\n", exp(1));

	//Displaying the difference between calculated value and the actual output
	for(i=0; i< array_size; i++){
		printf("Estimate difference for term %d is %0.20f\n", i, exp(1)-array_of_terms[i]);
	}
	
	//deallocation og array in the memory
	free(array_of_terms);
	array_of_terms = NULL ;

	return 0;
}
