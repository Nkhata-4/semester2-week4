
/*
Name: Yanjani Nkhata
Student ID: 201930814
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char text[100];
    char enter_text[100];
    printf("Enter your text: ");
    fgets(enter_text, sizeof(enter_text), stdin);
    
    
    // process the command-line data using appropriate string functions
    
    int i=0;
    for ( i=0; i<argc; i++) {
        if (enter_text[i] != " ") {
            text[i] = enter_text[i];
        } else {
            text[i] = "-";
        }
    }
        
    
    printf("%s\n",text); // use only this single print statement in your submitted code

    return 0;
}