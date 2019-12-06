#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "fakultet.h"

void Decide_faculty(){
    int i, question_amount;
    fakulteter_struct *fakultet = calloc(FAKULTETSIZE,sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS,sizeof(weight));

    question_amount = load_questions(weights, fakultetsvalg, fakultet);
    get_questions(fakultet, weights,question_amount);
    sort_by_score(fakultet);

    printf("\n");

    for (i = 0; i < FAKULTETSIZE; i++){
        printf("%-14s %.2lf \n",fakultet[i].navn,fakultet[i].score);
    }
    
    return;
}
