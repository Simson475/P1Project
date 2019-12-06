#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Teknisk.h"

void Decide_Teknisk(char* Name){
    int question_amount;
    fakulteter_struct *teknisk_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    printf("Besvar foelgende: \n");
    question_amount = load_questions(weights, Teknisk, teknisk_fakultet);
    get_questions(teknisk_fakultet, weights, question_amount);
    sort_by_score(teknisk_fakultet);
    Result(teknisk_fakultet, Name);
    print_on_screen(teknisk_fakultet);
        
    free(teknisk_fakultet);
    free(weights);
    return;
}
