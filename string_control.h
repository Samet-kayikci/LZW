#include <string.h>
#include "write_array.h"

void str_record(){
    int i, j;
    int a = 0;
    int t;
    int y = 0;
    int s = 0;
    int l = 0;
    record_ch(&t);
    int x = 0;
    char *temp_string;
    
    fseek(file, 0, SEEK_SET);       // again start
        temp_string = (char *)malloc(sizeof(char));     // make room
        string = (char *)malloc(sizeof(char));         // make room

        temp_char[1] = '\0';        // for character variable

    while ((character = fgetc(file)) != EOF){
        if(character == '\n'){      // if the character is on a new line
            character = 0110;
        }

        if(character == ' ')       // if the character is on a space
            character = 0010;

        temp_char[0] = character; // assign character to temp_data

        strcat(string, temp_char);  // concatenate string and temp_char

        for(i = 0; i < t; i++){
            if(strcmp(string, ch_file[i]) == 0){    // Is string equal to ch_file[i] ?
                x = 0;      
                break;
            }
            else{
                x++;
            }
        }

        if(x > 0){

            for(j = 0; j < t; j++){
                if(strcmp(temp_string, ch_file[j]) == 0){           
                    output[a] = j;  // encoding the string
                    a++;
                    break;
                }
            }
            len = strlen(string);   // string lenght
            ch_file[t] = malloc(sizeof(char));  //make room
            strcpy(ch_file[t], string);
            ch_file[t][len] = '\0';     // end of ch_file[t] = NULL
            t++;    
            strcpy(string, temp_char);      // adding character

        }
        strcpy(temp_string,string);       // concatenate temp_string and string

    }   

    // return;
    for(j = 0; j < t; j++){
        if(strcmp(temp_string, ch_file[j]) == 0){      // Is temp_string equal to ch_file[j] ?      
            output[a] = j;            // assign index number to output[i]
            a++;
            break;
                }
            }

    len = a;
    dictionary_len = t;

}