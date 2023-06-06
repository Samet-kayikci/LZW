#include <stdio.h>
int R_file(char **argv){
    file = fopen(*argv,"r");    // reads file data
    if(file == NULL){
        printf("Error, file not found");
        return -1;
    }
}