#include "read_file.h"
#include <string.h>
#include <stdlib.h>

void record_ch(int *c){

int i, j;
int l = 0, t = 0;
int end;

record_file(&end);     // determine end of the file

for(i = 0; i < end; i++){
    if(i == 0){
        ch_list.file_ch[t] = ch_list.file_data[i];      // assign value at start of loop
        t++;
    }
    else{
        for(j = 0; j < i; j++){
            if(ch_list.file_ch[j] == ch_list.file_data[i]){   // Is file_ch[j] equal to file_data[i] ?
                l++;
                break;
            }
        }

    if(l == 0){
        ch_list.file_ch[t] = ch_list.file_data[i];  // assign value if l is zero
        t++;
    }
    l = 0;
    }
}

for(i = 0; i < t; i++){
    ch_file[i] = (char *)malloc(sizeof(char)); // make room
    ch_file[i][0] = ch_list.file_ch[i];     // assign value to beginning of string
    ch_file[i][1] = '\0';                   // and assign null next index
}

*c = t;
}