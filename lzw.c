#include <stdio.h>
#include "global_veriable.h"
#include "file_input.h"
#include "string_control.h"
#include "file_output.h"
#include "data_record.h"
#include "decode_file.h"
int main(){
    int key;
    printf("1-)endcode\n 2-)decode\nchoose: "); 
    scanf("%d",&key);
        file_name = (char *)malloc(sizeof(char));
        dic_file = (char *)malloc(sizeof(char));
        out_file = (char *)malloc(sizeof(char));
        printf("file name: ");
    if(key == 1){
        scanf("%s",file_name);
        printf("dictionary file: ");
        scanf("%s",dic_file);
        printf("output file: ");
        scanf("%s",out_file);
        R_file(&file_name);
        str_record();
        W_file(&file_name, &out_file);
        character_record(&dic_file);

        fclose(file);   
        fclose(output_file);
        free(ch_list.file_data);
    
    }
    else if(key == 2){
        scanf("%s",file_name);
        printf("dictionary file: ");
        scanf("%s",dic_file);
        printf("output file: ");
        scanf("%s",out_file);     
        decode(&file_name,&dic_file, &out_file);
        fclose(record);
        fclose(file);
        fclose(output_file);
    }
    return 0;
}


