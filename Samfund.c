#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Samfund.h"

void Decide_Samfund(char* Name){
    int question_amount;
    fakulteter_struct *samfund_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    question_amount = load_questions(weights, Samfund, samfund_fakultet);
    get_questions(samfund_fakultet, weights, question_amount);
    sort_by_score(samfund_fakultet);
    Result(samfund_fakultet, Name);
    print_on_screen(samfund_fakultet);
        
    free(samfund_fakultet);
    free(weights);
    return;
}
