#include <stdlib.h>
void record_file(int *end){
    int i = 0;
    int a = 0;

    while((character = fgetc(file)) != EOF){
        size++;                                 // How many characters are in the file?
    }   
    ch_list.file_data = (char *)malloc(size *sizeof(char)); //make room
    fseek(file,0,SEEK_SET);     // start again

    while((character = fgetc(file)) != EOF){
        ch_list.file_data[i] = character;       //assign all characters to array
       if(ch_list.file_data[i] == '\n')         // if the character is on a new line
        ch_list.file_data[i] = 0110;
       if(ch_list.file_data[i] == ' ')         // if the character is on a space
        ch_list.file_data[i] = 0010;       
        i++;
    }
    *end = i;           // end character
}