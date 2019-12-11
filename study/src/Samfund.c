#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Samfund.h"

void Decide_samfund(char* Name){
    int Question_amount;
    fakulteter_struct *Samfund_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));
    Is_allocated(Samfund_fakultet);
    Is_allocated(weights);

    printf("Besvar foelgende: \n");
    Question_amount = Load_questions(weights, Samfund, Samfund_fakultet);
    Get_questions(Samfund_fakultet, weights, Question_amount);
    Sort_by_score(Samfund_fakultet);
    Result(Samfund_fakultet, Name);
    Print_on_screen(Samfund_fakultet);
        
    free(Samfund_fakultet);
    free(weights);
    free(Name);
    return;
}
