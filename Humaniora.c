#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Humaniora.h"


void Decide_Humaniora(){
    int i, question_amount;
    fakulteter_struct *human_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    question_amount = load_questions(weights, Humaniora, human_fakultet);
    get_questions(human_fakultet, weights, question_amount);
    sort_by_score(human_fakultet);
    Result(human_fakultet, "Simon");

    for (i = 0; i <= MAXEDUCATIONS; i++){
        if (human_fakultet[i].score != 0){
           printf("%s %.2lf \n", human_fakultet[i].navn, human_fakultet[i].score);
        }
        else {
            free(human_fakultet);
            free(weights);
            return;
        }
        
        
    }
    free(human_fakultet);
    free(weights);
    return;
}