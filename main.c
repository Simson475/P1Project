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

int main(void){
    Decide_faculty();
    Choose_faculty();
	return 0; 
	
}

void Choose_faculty(){ /*Funktion hvor brugeren vælger ønsket studie*/
    int Faculty_Input;
    printf("Vaelg dit oenskede fakultet:\n");
    printf("0 : Humaniora\n 1 : Naturvidenskab\n2 : Teknisk\n 3 : Samfundsfagligt\n 4 : Sundheds\n");
    scanf("%d",&Faculty_Input);

    switch (Faculty_Input){
        case Humaniora: Decide_Human();break;
        case Natur: Decide_Nature();break;
        case Teknisk: Decide_Teknisk();break;
        case Samfund: Decide_Samfund();break;
        case Sundhed: Decide_Sundhed();break;
        default:break;
    }

    return;

}