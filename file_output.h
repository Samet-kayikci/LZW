#include <stdio.h>

void W_file(char **argv, char **argv1){
    int i;
    file = fopen(*argv,"w");      // write in file
    for(i = 0; i < len; i++){
        fprintf(file,"%d",output[i]);
    }
    output_file = fopen(*argv1,"w");   // record in output
    for(i = 0; i < len; i++){
        fprintf(output_file,"%d ",output[i]);
    }
}