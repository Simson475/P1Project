#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Naturvidenskab.h"

void Decide_nature(char* Name){
    int Question_amount;
    fakulteter_struct *Naturvidenskab_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));

    printf("Besvar foelgende: \n");
    Question_amount = load_questions(weights, Natur, Naturvidenskab_fakultet);
    get_questions(Naturvidenskab_fakultet, weights, Question_amount);
    sort_by_score(Naturvidenskab_fakultet);
    Result(Naturvidenskab_fakultet, Name);
    print_on_screen(Naturvidenskab_fakultet);
        
    free(Naturvidenskab_fakultet);
    free(weights);
    return;
}
