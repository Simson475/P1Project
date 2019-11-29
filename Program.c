#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libxl.h"

#define FACULTYQUESTION 10 
#define FAKULTETSIZE 5

typedef struct questions{
    char fag[20];
    double human_weight, natur_weight, teknisk_weight, samfund_weight, sundhed_weight;
}questions;

void load_questions(questions question[]);
void Questions(double Fakultet[], questions question[]);
void sporgsmaal(double Fakultet[], questions question);
void ask(int *input, char fag[]);

enum Fakulteter {Humaniora,Natur,Teknisk,Samfund,Sundhed};

int main(void){
    int i;
    double Fakultet[]={0,0,0,0,0};
    questions question[FACULTYQUESTION];

    load_questions(question);
    Questions(Fakultet, question);

    for (i=0;i<FAKULTETSIZE;i++){

        switch (i) {
            case 0:
                printf("Humaniora         "); break;
            case 1:
                printf("Naturvidenskab    "); break;
            case 2:
                printf("Teknik            "); break;
            case 3:
                printf("Samfundsvidenskab "); break;
            case 4:
                printf("Sundhedsvidenskab "); break;
            default:
                printf("Noget gik galt i printet."); break;
        }

        printf(" %.2lf \n",Fakultet[i]);
    }

	return 0; 
	
}

void Questions(double Fakultet[], questions question[]){
    int i=0;

    for ( i = 0; i < FACULTYQUESTION; i++){
        sporgsmaal(Fakultet, question[i]);
    }
    
    return;
}

void sporgsmaal(double Fakultet[],questions question){
    int Input=0;

    ask(&Input, question.fag);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*question.human_weight;
    Fakultet[Natur] = Fakultet[Natur] + Input*question.natur_weight;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*question.teknisk_weight;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*question.samfund_weight;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*question.sundhed_weight;

    return;
}

void ask(int *Input, char fag[]){
    do{
    printf("Hvor glad er du for %s? (1-10)\n",fag);
    scanf("%d", Input);
    } while (*Input<1 || *Input>10);
    
    return;
}

void load_questions(questions question[]){
    int i;
    for ( i = 0; i < FACULTYQUESTION; i++){
        strcpy(question[i].fag,"HER INDSÆTTES FRA CUSTOM LIB");
        question[i].human_weight=0;
        question[i].natur_weight=0;
        question[i].teknisk_weight=0;
        question[i].samfund_weight=0;
        question[i].sundhed_weight=0;
    }
    return;
}