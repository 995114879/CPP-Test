#include <stdio.h>

int main(){

   printf("size of a void : %d Bytes.\n", sizeof(void));
   printf("size of a char : %d Bytes.\n", sizeof(char));
   printf("size of a char* : %d Bytes.\n", sizeof(char*));
   printf("size of a int : %d Bytes.\n", sizeof(int));
   printf("size of a int* : %d Bytes.\n", sizeof(int*));
   printf("size of a float : %d Bytes.\n", sizeof(float));
   printf("size of a float* : %d Bytes.\n", sizeof(float*));
   printf("size of a double : %d Bytes.\n", sizeof(double));
   printf("size of a bool : %d Bytes.\n", sizeof(bool));
   printf("size of a long : %d Bytes.\n", sizeof(long));
   printf("size of a short : %d Bytes.\n", sizeof(short));
   printf("size of a short int: %d Bytes.\n", sizeof(short int));
   printf("size of a long int: %d Bytes.\n", sizeof(long int));
   printf("size of a long long : %d Bytes.\n", sizeof(long long));

   
   return 0;
}