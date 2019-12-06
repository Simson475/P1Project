#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Naturvidenskab.h"

void Decide_Nature(char* Name){
    int i, question_amount;
    fakulteter_struct *naturvidenskab_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    question_amount = load_questions(weights, Natur, naturvidenskab_fakultet);
    get_questions(naturvidenskab_fakultet, weights, question_amount);
    sort_by_score(naturvidenskab_fakultet);
    Result(naturvidenskab_fakultet, "Simon");

    for (i = 0; i <= MAXEDUCATIONS; i++){
        if (naturvidenskab_fakultet[i].score != 0){
           printf("%s %.2lf \n", naturvidenskab_fakultet[i].navn, naturvidenskab_fakultet[i].score);
        }
        else {
            free(naturvidenskab_fakultet);
            free(weights);
            return;
        }
        
        
    }
    free(naturvidenskab_fakultet);
    free(weights);
    return;
}
