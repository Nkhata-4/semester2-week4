
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];
    
    float b[0][0] = 1.0;
    float a[0][0] = 1.0;
    c[0][0] = a[0][0] + b[0][0];
    printf("Matrix c %f\n", c[0][0]);


    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    return 0;
 }
