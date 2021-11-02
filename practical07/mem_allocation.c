#include<stdio.h>
#include<stdlib.h>

//function to allocate the memory for array
int* mallocarray(int n){

	int* array;

	//allocating memory for integer array
	array = (int*) malloc(n * sizeof(int));
	printf("Array of size %d allocated.\n", n);
	return array;

}

//function to fill the array with ones
void fillwithones(int* array, int n){

	int i;
	for(i=0; i<n; i++)
		array[i] = 1;
}

//Printing the array in the function
void printarray(int *array, int n){

	int i;
	for(i=0; i<n; i++)
		printf("%d ", array[i]);

	printf("\n"); 

}

//deallocating the memory of the array
void freearray(int* array){

	free(array);
	printf("Array freed!\n");
}

//defining main fuction
int main(){

	int n;
	int* array_main;

	//taking inputs
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	//performing tasks
	array_main = mallocarray(n);
	fillwithones(array_main, n);
	printarray(array_main, n);
	freearray(array_main);
	array_main = NULL;

	return 0;
} 
