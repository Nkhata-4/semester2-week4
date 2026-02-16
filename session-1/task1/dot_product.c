
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float d;
    int k;
    for (k=0; k<5; ++k) {
      d += a[k] * b[k];
    }

    /*
    Code to compute the dot product
    Store your answer in d
    print your final answer
    */
    printf("dot product = %f\n", d);
    return 0;
 }