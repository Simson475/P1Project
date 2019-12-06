#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Naturvidenskab.h"

void Decide_Nature(char* Name){
    int question_amount;
    fakulteter_struct *naturvidenskab_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    printf("Besvar foelgende: \n");
    question_amount = load_questions(weights, Natur, naturvidenskab_fakultet);
    get_questions(naturvidenskab_fakultet, weights, question_amount);
    sort_by_score(naturvidenskab_fakultet);
    Result(naturvidenskab_fakultet, Name);
    print_on_screen(naturvidenskab_fakultet);
        
    free(naturvidenskab_fakultet);
    free(weights);
    return;
}
