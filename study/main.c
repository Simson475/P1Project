#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "src/Utility.h"
#include "src/Study.h"
#include "src/Faculty.h"


void Choose_faculty(char* Name);
void Info_screen();

int main(void){
    char* Name;
    Info_screen();
    Name = Get_users_name();
    Decide_faculty();
    Choose_faculty(Name);
    printf("skriv input for at lukke programmet\n");
    scanf("%[\n]", Name);
	return 0; 
}

void Choose_faculty(char* Name){ /*Funktion hvor brugeren vælger ønsket studie*/
    int Faculty_input, Scan_result;
    do{
        printf("\nVaelg dit oenskede fakultet:\n");
        printf("1 : Humaniora\n2 : Naturvidenskab\n3 : Teknik\n4 : Samfundsfag\n5 : Sundhed\n");
        Scan_result = scanf("%d", &Faculty_input);
        printf("---------------------------------------------------\n");
        if(Scan_result == 0){
            No_letters();
        }
        else{
            Decide_study(Name, Faculty_input-1);
        }
    }
    while (Faculty_input < 1 || Faculty_input > 5);

    return;

}

void Info_screen(){
    printf("Denne test fungerer ved at du vil blive spurgt ind til din interesse for forskellige gymnasiefag.\n");
    printf("Du vil blive bedt om at tilkendegive din interesse fra 1-10.\n");
    printf("Paa baggrund af dine interesser foreslaaes et fakultet, som passer specifikt til dig.\n");
    printf("Du vaelger selv hvilket fakultet du oensker at fortsaette testen med.\n");
    printf("Herfter skal du igen tilkendegive din interesse (1-10) i forskellige emner, indenfor det valgte fakultet\n");
    printf("Programmet foreslaar 5 studieretninger, som vil passe godt til dig. Listen gemmes automatisk i en tekstfil: 'dit navn'.exe\n");
    printf("**Denne test er kun vejledende og boer anvendes i samarbejder med en studievejleder**\n\n");

    return;
}

