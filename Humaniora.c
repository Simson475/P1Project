#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Humaniora.h"


void Decide_Humaniora(char* Name){
    int question_amount;
    fakulteter_struct *human_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    question_amount = load_questions(weights, Humaniora, human_fakultet);
    get_questions(human_fakultet, weights, question_amount);
    sort_by_score(human_fakultet);
    Result(human_fakultet, Name);
    print_on_screen(human_fakultet);
        
    free(human_fakultet);
    free(weights);
    return;
}