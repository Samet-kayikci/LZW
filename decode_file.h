#include <stdio.h>
#include <string.h>

void decode(char **argv, char **argv1, char **argv2){
    
    char *data1;    // for reading dictionary
    char *data2;   // for reading output

    char character; 
    char *temp1;
    char *temp2;

    int out[10000]; // for assign numbers dictionary 


    char **print_data;    // for write in file 

        //---------variables to use in loops
    int i = 0;
    int j = 0;
    int a = 0;
    int x = 0;
    int b = 0;
    int l = 0;
    int t = 0;
    int count = 0;
    //-------------
record = fopen(*argv1, "r");  // reading record

data1 = (char *)malloc(sizeof(char));   // make room
while (fscanf(record, "%s", data1) == 1) {
    char* temp1 = malloc(sizeof(char) * (strlen(data1) + 1));   // make room
    strcpy(temp1, data1);   // copy data to temp
    ch_file[a] = temp1;    //  assign value temp1 in ch_file
    a++;
}


output_file = fopen(*argv2,"r");   // reading output
data2 = (char *)malloc(sizeof(char));   //make room
while(fscanf(output_file,"%s",data2) == 1){     // read to the space
    temp2= malloc(sizeof(char)); // make room
    strcpy(temp2,data2);        // copy data to temp
    int temp3 = atoi(temp2);   // change type
    out[j] = temp3;           // assign value temp3 in out

    j++;
}


i = 0;

    while(ch_file[i] != NULL){
        while (ch_file[i][l] != '\0')   
        {
            if(ch_file[i][l] == 0110)       // if ch_file is 0110
                ch_file[i][l] = '\n';      // assign newline
            if(ch_file[i][l] == 0010)     // if ch_file is 0010
                ch_file[i][l] = ' ';     // assign space
            l++;
        }
        i++;
        l = 0;
    }


    print_data = (char **)malloc(j * sizeof(char *)); // make room
    for(i = 0; i < j; i++){
        print_data[i] = ch_file[out[count]]; // assign value ch_file in print_data
        count++;
    }

    file = fopen(*argv,"w");    

    for(j = 0; j < i; j++){
        fprintf(file,"%s",print_data[j]);   // write in file
    }
    free(print_data);

}