#include <stdio.h>

int main() {
   int n, i, sum = 0;
   printf("Enter the size of array: ");
   scanf("%d", &n);
   int A[n]; //declaring array with size n
   
   printf("Enter elements of array:\n");
   for(i = 0; i < n; i++) {
      scanf("%d", &A[i]);
   }
   
   //computing the sum of array elements using pointers
   int *ptr; 
   ptr = A; //initialize pointer with the address of first element of array
   
   for(i = 0; i < n; i++) { 
      sum += *ptr; //add the value of each element pointed by pointer to sum
      ptr++; //increment the pointer to point to next element
   }
   printf("\nThe sum of all elements in the array is: %d", sum);
   return 0;
}
