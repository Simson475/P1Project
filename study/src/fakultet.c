#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "fakultet.h"

void Decide_faculty(){
    int question_amount;
    fakulteter_struct *fakultet = calloc(MAXEDUCATIONS,sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS,sizeof(weight));
    Is_allocated(fakultet);
    Is_allocated(weights);

    printf("Besvar foelgende: \n");
    question_amount = Load_questions(weights, fakultetsvalg, fakultet);
    Get_questions(fakultet, weights,question_amount);
    Sort_by_score(fakultet);
    Print_on_screen(fakultet);

    free(fakultet);
    free(weights);
    return;
}
