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

void Choose_faculty(char* Name);
void Info_screen();

int main(void){
    char* Name;
    Info_screen();
    Name = Get_users_name();
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

void Info_screen(){
    printf("Denne test fungere ved at du vil blive spurgt indtil din interesse for forskellige gymnasiefag.\n");
    printf("Du vil blive bedt om at tilkendegive din interesse fra 1-10.\n");
    printf("Paa baggrund af dine interesser foreslaaes et fakultet, som passer til specifikt til dig.\n");
    printf("Du vaelger selv hvilket fakultet du oensker at fortsaette testen med.\n");
    printf("Herfter skal du igen tilkendegive din interesse (1-10) i forskellige emner, indenfor det valgte fakultet\n");
    printf("Programmet foreslaar 5 studieretninger, som vil passe godt til dig. Listen gemmes også i en tekstfil: 'dit navn'.exe\n");
    printf("**Denne test er kun vejledende og boer anvendes i samarbejder med en studievejleder**\n\n");

    
}

