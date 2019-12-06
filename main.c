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

void Choose_faculty(Name);

int main(void){
    char* Name = Get_users_name();
    Decide_faculty();
    Choose_faculty(Name);
	return 0; 
	
}

void Choose_faculty(char* Name){ /*Funktion hvor brugeren vælger ønsket studie*/
    int Faculty_Input;
    printf("\n");
    printf("Vaelg dit oenskede fakultet:\n");
    printf("0 : Humaniora\n1 : Naturvidenskab\n2 : Teknisk\n3 : Samfundsfagligt\n4 : Sundheds\n");
    scanf("%d",&Faculty_Input);

    switch (Faculty_Input){
        case Humaniora: Decide_Humaniora(Name);break;
        case Natur: Decide_Nature(Name);break;
        case Teknisk: Decide_Teknisk(Name);break;
        case Samfund: Decide_Samfund(Name);break;
        case Sundhed: Decide_Sundhed(Name);break;
        default:break;
    }

    return;

}

