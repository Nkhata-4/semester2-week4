
/*
Name: Yanjani Nkhata
Student ID: 201930814
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char text[100];
    printf("Enter your text: \n");
    fgets(text, sizeof(text), stdin);
    
    
    // process the command-line data using appropriate string functions
    int i=0;
    for (i=0; i<argc; i++) {
        if (text[i] == " ") {
            text[i] == "-";
        }
    }
    printf("%s\n",text); // use only this single print statement in your submitted code

    return 0;
}