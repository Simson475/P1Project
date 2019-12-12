#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utility.h"
#include "Faculty.h"

void Decide_faculty(){
    int question_amount;
    Faculty_struct *fakultet = calloc(MAXEDUCATIONS,sizeof(Faculty_struct));
    Weight *weights = calloc(MAXEDUCATIONS,sizeof(Weight));
    Is_allocated(fakultet);
    Is_allocated(weights);

    printf("Besvar foelgende: \n");
    question_amount = Load_questions(weights, Faculty_choice, fakultet);
    Get_questions(fakultet, weights,question_amount);
    Sort_by_score(fakultet);
    Print_on_screen(fakultet);

    free(fakultet);
    free(weights);
    return;
}
