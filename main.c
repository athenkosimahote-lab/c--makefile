#include <stdio.h>
#include "utils.h"
int main(void){
    int choice;
    while(1){
        printmenu();
        printf("\nenter your choice: ");
        if(scanf("%d",&choice)!=1){
            printf("invalid input\n");
            break;
        }
        if(choice ==0){
            printf("Exiting program. goodbye:\n");
            break;
        }
        switch(choice){
            case 1: printasciitable();
            break;
            case 2: createFile();
            break;
            case 3: writetofile();
            break;
            case 4: readfile();
            break;
            case 0: 
            printf("Exit\n");
            break;
            default:
            printf("invalid selection\n");
        }
    }
    return 0;
}
