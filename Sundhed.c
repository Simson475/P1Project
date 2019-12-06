#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Sundhed.h"

void Decide_Sundhed(char* Name){
     int i, question_amount;
    fakulteter_struct *sundhed_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    question_amount = load_questions(weights, Sundhed, sundhed_fakultet);
    get_questions(sundhed_fakultet, weights, question_amount);
    sort_by_score(sundhed_fakultet);
    Result(sundhed_fakultet, "Simon");

    for (i = 0; i <= MAXEDUCATIONS; i++){
        if (sundhed_fakultet[i].score != 0){
           printf("%s %.2lf \n", sundhed_fakultet[i].navn, sundhed_fakultet[i].score);
        }
        else {
            free(sundhed_fakultet);
            free(weights);
            return;
        }
        
        
    }
    free(sundhed_fakultet);
    free(weights);
    return;
}
