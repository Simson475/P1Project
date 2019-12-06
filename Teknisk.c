#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Teknisk.h"

void Decide_Teknisk(char* Name){
    int i, question_amount;
    fakulteter_struct *teknisk_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    question_amount = load_questions(weights, Teknisk, teknisk_fakultet);
    get_questions(teknisk_fakultet, weights, question_amount);
    sort_by_score(teknisk_fakultet);
    Result(teknisk_fakultet, Name);

    for (i = 0; i <= MAXEDUCATIONS; i++){
        if (teknisk_fakultet[i].score != 0){
           printf("%s %.2lf \n", teknisk_fakultet[i].navn, teknisk_fakultet[i].score);
        }
        else {
            free(teknisk_fakultet);
            free(weights);
            return;
        }
        
        
    }
    free(teknisk_fakultet);
    free(weights);
    return;
}