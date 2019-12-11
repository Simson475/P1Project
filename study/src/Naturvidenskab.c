#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Naturvidenskab.h"

void Decide_nature(char* Name){
    int Question_amount;
    fakulteter_struct *Naturvidenskab_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));
    Is_allocated(Naturvidenskab_fakultet);
    Is_allocated(weights);

    printf("Besvar foelgende: \n");
    Question_amount = Load_questions(weights, Natur, Naturvidenskab_fakultet);
    Get_questions(Naturvidenskab_fakultet, weights, Question_amount);
    Sort_by_score(Naturvidenskab_fakultet);
    Result(Naturvidenskab_fakultet, Name);
    Print_on_screen(Naturvidenskab_fakultet);
        
    free(Naturvidenskab_fakultet);
    free(weights);
    free(Name);
    return;
}
