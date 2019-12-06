#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Samfund.h"

void Decide_samfund(char* Name){
    int Question_amount;
    fakulteter_struct *Samfund_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    printf("Besvar foelgende: \n");
    Question_amount = load_questions(weights, Samfund, Samfund_fakultet);
    get_questions(Samfund_fakultet, weights, Question_amount);
    sort_by_score(Samfund_fakultet);
    Result(Samfund_fakultet, Name);
    print_on_screen(Samfund_fakultet);
        
    free(Samfund_fakultet);
    free(weights);
    return;
}
