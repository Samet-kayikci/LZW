#include <stdio.h>
typedef struct veriable {   
    char *file_data;
    char file_ch[1000];
}ch;
ch ch_list;
FILE *file;                // process file
FILE *record;             // dictionary
FILE *output_file;       // output index
char *file_name;   
char *dic_file;
char *out_file;     
char *string;
char character;
char *ch_file[10000];      //dictionary
char temp_char[2];          // for character 
int output[8000];          // decoding number
size_t len;               // length
int dictionary_len;      // for dictionary lenght;
int size = 0;           // for end of file