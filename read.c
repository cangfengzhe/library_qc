//
// Created by 李丕栋 on 6/11/16.
//
#include<stdio.h>
#include <mhash.h>
#include <stdlib.h>

void read_file(char* file_name){
    FILE *fp;
    char str[128];
    if((fp=fopen(file_name,"r"))==NULL) {
        printf("File cannot be opened/n");
        exit(1);
    }
    else
        printf("File opened for writing/n");
    while(!feof(fp)) {
        if(fgets(str,128,fp)!=NULL)
            printf("%s",str);
            printf("a");
    }

    fclose(fp);
}