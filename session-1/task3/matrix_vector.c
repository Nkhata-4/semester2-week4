
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
    a = calloc(n, sizeof(float *));
    b = calloc(n, sizeof(float));
    c = calloc(n, sizeof(float));
    for (int k=0; k<n; ++k) {
        a[k] = calloc(n, sizeof(float));
    }

    for (int k=0; k<n; ++k) {
        for (int i=0; i<n; ++i) {
            a[k][i]=1.0;
            b[k]=1.0;
            c[k] += a[k][i] * b[k];
        }
        printf("c[%d]=%f at k=%d\n", k,c[k],k);
    }
    
    free(a);
    free(b);
    free(c);
    
    return 0;
 }
