#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Teknisk.h"

void Decide_teknisk(char* Name){
    int Question_amount;
    fakulteter_struct *Teknisk_fakultet = calloc(MAXEDUCATIONS, sizeof(fakulteter_struct));
    weight *weights = calloc(MAXEDUCATIONS, sizeof(weight));
    is_allocated(Teknisk_fakultet);
    is_allocated(weights);

    printf("Besvar foelgende: \n");
    Question_amount = load_questions(weights, Teknisk, Teknisk_fakultet);
    get_questions(Teknisk_fakultet, weights, Question_amount);
    sort_by_score(Teknisk_fakultet);
    Result(Teknisk_fakultet, Name);
    print_on_screen(Teknisk_fakultet);
        
    free(Teknisk_fakultet);
    free(weights);
    free(Name);
    return;
}
