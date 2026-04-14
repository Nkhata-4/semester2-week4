
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    for (int k=0; k<4; ++k) {
      for (int j=0; j<4; ++j) {
         a[k][j] = 1.0;
         b[j] = 4.0;
         c[k] += a[k][j] * b[j];
      }
      printf("c[%d] = %.2f\n", k, c[k]);
    }

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */
    return 0;
 }
