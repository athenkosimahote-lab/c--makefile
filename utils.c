#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "utils.h"
void printmenu(){
    printf("\n");
    printf("....MENU...\n");
    printf("1. Print Ascii Table\n");
    printf("2. Create a File\n");
    printf("3. write to a File\n");
    printf("4. read from a file\n");
    printf("0. Exit\n");
}
void createFile(){
    char filename[100];
    printf("Enter file name you want to create: ");
    scanf("%99s", filename);
    FILE*file =fopen(filename, "w");
    if(file ==NULL){
        printf("Error creating file");
        return;
    }
    printf("File '%s' created successfully\n", filename);
    fclose(file);
}
void printasciitable(){
    printf("%15s\t%15s\t%15s\t%15s\n", "DEC","HEX","CHAR","OCT");
    int i =32;
    while(i<127){
        printf("%15d\t%15x\t%15c\t%15o\n",i,i,i,i);
        i++;
    }
}
void writetofile(){
    char filename[100];
    char text[256];
    printf("Enter file name to write to :");
    scanf("%99s", filename);
    FILE*file =fopen(filename, "a");
    if(file==NULL){
    printf(" Error opening file!\n");
    return;
    }
    getchar();
    printf("Enter text to write: ");
    fgets(text,sizeof(text),stdin);
    fprintf(file,"%s",text);
    printf("Data written successully.\n");
    fclose(file);
}
void readfile(){
    char filename[100];
    int ch;
    printf("enter file name to read: ");
    scanf("%99s", filename);
    FILE*file = fopen(filename,"r");
    if(file==NULL){
        printf("Error! could not open the file %s\n",filename);
        return;
    }
    printf("\n___file content__\n");
    while((ch = fgetc(file))!=EOF){
        putchar(ch);

    }
    fclose(file);
}
