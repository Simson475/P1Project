#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Humaniora.h"


void Decide_humaniora(char* Name){
    int Question_amount;
    fakulteter_struct *Human_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));
    Is_allocated(Human_fakultet);
    Is_allocated(weights);

    printf("Besvar foelgende: \n");
    Question_amount = Load_questions(weights, Humaniora, Human_fakultet);
    Get_questions(Human_fakultet, weights, Question_amount);
    Sort_by_score(Human_fakultet);
    Result(Human_fakultet, Name);
    Print_on_screen(Human_fakultet);
        
    free(Human_fakultet);
    free(weights);
    free(Name);
    return;
}
