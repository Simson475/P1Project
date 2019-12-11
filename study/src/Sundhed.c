#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Sundhed.h"

void Decide_sundhed(char* Name){
    int question_amount;
    fakulteter_struct *sundhed_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));
    Is_allocated(sundhed_fakultet);
    Is_allocated(weights);

    printf("Besvar foelgende: \n");
    question_amount = Load_questions(weights, Sundhed, sundhed_fakultet);
    Get_questions(sundhed_fakultet, weights, question_amount);
    Sort_by_score(sundhed_fakultet);
    Result(sundhed_fakultet, Name);
    Print_on_screen(sundhed_fakultet);

    free(sundhed_fakultet);
    free(weights);
    free(Name);
    return;
}
