#include<stdio.h>
#include<stdlib.h>

void fib(int *a, int *b); /*function declaration*/

int main(void){

	#Taking inputs
	int n;
	printf("Enter a positive integer for n: \n");
	scanf("%d", &n);
	#Condtion for number less than 1
	if(n<1){
		printf("Nuber is less than 1\n");
		exit(1);
	}	
	#Initializing variables
	int n1=0;
	int n2=1;
	
	printf("The Fibonacci sequence is : \n");
	printf("%d, ", n1);
	
	#Calculating Fibonacci series by calling functions and passing variables by ref
	int i;
	for(i=1;i<n-1;i++){
		fib(&n1, &n2);
		printf("%d, ", n1);

	}
	fib(&n1, &n2);
	printf("%d\n", n1);

return 0;
}
#Defining the Fibonacci series function
void fib(int *a, int *b){

	int next;
	next = *a + *b;
	*a = *b;
	*b = next;

}
