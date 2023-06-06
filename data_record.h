#include <stdio.h>
void character_record(char **argv){
    int i;
    record = fopen(*argv,"w");
    for(i = 0; i < dictionary_len; i++){
        fprintf(record,"%s ",ch_file[i]);
    }
}