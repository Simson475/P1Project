#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "fakultet.h"

void Decide_faculty(){
    int question_amount;
    fakulteter_struct *fakultet = calloc(MAXEDUCATIONS,sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS,sizeof(weight));

    printf("Besvar foelgende: \n");
    question_amount = load_questions(weights, fakultetsvalg, fakultet);
    get_questions(fakultet, weights,question_amount);
    sort_by_score(fakultet);

    printf("\n");
    print_on_screen(fakultet);

    free(fakultet);
    free(weights);
    return;
}
