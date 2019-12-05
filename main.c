#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Naturvidenskab.h"
#include "Humaniora.h"
#include "Samfund.h"
#include "Sundhed.h"
#include "Teknisk.h"
#include "fakultet.h"

void Choose_faculty();
void Result(fakulteter_struct choice[], char Name[]);

int main(void){
    Decide_faculty();
    Choose_faculty();
	return 0; 
	
}

void Choose_faculty(){ /*Funktion hvor brugeren vælger ønsket studie*/
    int Faculty_Input;
    printf("Vaelg dit oenskede fakultet:\n");
    printf("0 : Humaniora\n1 : Naturvidenskab\n2 : Teknisk\n3 : Samfundsfagligt\n4 : Sundheds\n");
    scanf("%d",&Faculty_Input);

    switch (Faculty_Input){
        case Humaniora: Decide_Humaniora();break;
        case Natur: Decide_Nature();break;
        case Teknisk: Decide_Teknisk();break;
        case Samfund: Decide_Samfund();break;
        case Sundhed: Decide_Sundhed();break;
        default:break;
    }

    return;

}

void Result(fakulteter_struct choice[], char name[]){

    FILE *File_pointer;
    char file_name[30];
    sprintf(file_name,"%s.txt",name);
    File_pointer = fopen(file_name,"w");

    fprintf(File_pointer,"Navn: %s\n Prioriterede uddannelser:\n1. %s\n2. %s\n3. %s\n",
                        name,choice[0].navn,choice[1].navn,choice[2].navn);
    fclose(File_pointer);

}