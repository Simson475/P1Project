#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Naturvidenskab.h"
#include "Humaniora.h"
#include "Samfund.h"
#include "Sundhed.h"
#include "Teknisk.h"


int main(void){
    int i, question_amount;
    fakulteter_struct *fakultet= calloc(FAKULTETSIZE,sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS,sizeof(weight));

    question_amount=load_questions(weights, fakultetsvalg);
    get_questions(fakultet, weights,question_amount);

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

        printf(" %.2lf \n",fakultet[i].score);
    }

	return 0; 
	
}