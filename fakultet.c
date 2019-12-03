#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "fakultet.h"

void fakultet_choice(){
    int i, question_amount;
    fakulteter_struct *fakultet = calloc(FAKULTETSIZE,sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS,sizeof(weight));

    name_faculty(fakultet);
    question_amount = load_questions(weights, fakultetsvalg);
    get_questions(fakultet, weights,question_amount);
    
    for (i = 0; i < FAKULTETSIZE; i++){

        switch (i){
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

        printf(" %.2lf \n",fakultet[i].score);
    }
    
    return;
}

void name_faculty(fakulteter_struct fakultet[]){

    strcpy(fakultet[Sundhed].navn,"Sundhed");
    strcpy(fakultet[Humaniora].navn,"Humaniora");
    strcpy(fakultet[Samfund].navn,"Samfundsfag");
    strcpy(fakultet[Teknisk].navn,"Teknisk");
    strcpy(fakultet[Natur].navn,"Naturvidenskab");

    return;
}