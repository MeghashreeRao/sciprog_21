#include<stdio.h>
#include<stdlib.h>

// Problem
//
// Rod 1 = A
// Rod 2 = B
// Rod 3 = C
//
// n disks = 2
//
// Disk 1 from A to B
// Disk 2 from A      to C
// Disk 3 from      B to C
//
// - Shift 'n-1' disks from Source (A) to Middle (B)
// - Shift one disk from Source(A) to Destination (C)
// - Shift 'n-1' disks from Middle (B) to Destination (C)

//Defining hanoi function
void hanoi(int n, int source, int dest, int mid){
  if(n==1){
    printf("Moved disk %d from %d to %d\n", n, source, dest);
  }
  else{
    hanoi(n-1, source, mid, dest);
    printf("Moved disk %d from %d to %d\n", n, source, dest);
    hanoi(n-1, mid, dest, source);
  }
}

void main(){

  int h;
  printf("Enter the number of disks : \n");
  scanf("%d", &h);
  printf("Tower of Hanoi solution for %d disks: \n", h);
  //giving inputs to hanoi 
  hanoi(h, 1, 3, 2);

}
