/*
 * Iteraive version of Euclid's Algorithm
 * to calculate the gcd of 2 positive integers
 */
#include <stdio.h>

//Declare functions
int iterativeGCD(int a, int b);

//Define main fuction
int main(void) {
   int a, b, error;

   //taking inputs
   printf("Please input two positive integers\n");
   error = scanf("%d %d",&a,&b);

   //checking for negative numbers
   if (error != 2) {
     printf("Please try again\n");
     return 1;
   }

   if (a<=0 || b<=0) {
     printf("These numbers are not positive!\n");
     return 1;
   }

  //Call Functions
  printf("Iterative GCD{%d, %d}=%d\n", a, b, iterativeGCD(a,b));
  return 0;
}

//Define functions
int iterativeGCD(int a , int b){

  int temp;
  while(b != 0){
     temp = b;
     b = a%b;
     a = temp;    
  }
  return a;
}


