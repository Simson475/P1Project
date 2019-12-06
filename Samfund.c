#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Samfund.h"

void Decide_Samfund(char* Name){
    int i, question_amount;
    fakulteter_struct *samfund_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    question_amount = load_questions(weights, Samfund, samfund_fakultet);
    get_questions(samfund_fakultet, weights, question_amount);
    sort_by_score(samfund_fakultet);
    Result(samfund_fakultet, "Simon");

    for (i = 0; i <= MAXEDUCATIONS; i++){
        if (samfund_fakultet[i].score != 0){
           printf("%s %.2lf \n", samfund_fakultet[i].navn, samfund_fakultet[i].score);
        }
        else {
            free(samfund_fakultet);
            free(weights);
            return;
        }
        
        
    }
    free(samfund_fakultet);
    free(weights);
    return;
}