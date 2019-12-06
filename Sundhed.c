#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Sundhed.h"

void Decide_sundhed(char* Name){
    int question_amount;
    fakulteter_struct *sundhed_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    printf("Besvar foelgende: \n");
    question_amount = load_questions(weights, Sundhed, sundhed_fakultet);
    get_questions(sundhed_fakultet, weights, question_amount);
    sort_by_score(sundhed_fakultet);
    Result(sundhed_fakultet, Name);
    print_on_screen(sundhed_fakultet);

    free(sundhed_fakultet);
    free(weights);
    return;
}
