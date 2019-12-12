#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utility.h"
#include "Faculty.h"

/*"Main" funktionen for at vælge fakultet*/
void Decide_faculty(){
    int question_amount;
    Faculty_struct *Faculty = calloc(MAXEDUCATIONS,sizeof(Faculty_struct));
    Weight *weights = calloc(MAXEDUCATIONS,sizeof(Weight));
    Is_allocated(Faculty);
    Is_allocated(weights);

    printf("Besvar foelgende: \n");
    question_amount = Load_questions(weights, Faculty_choice, Faculty);
    Get_questions(Faculty, weights,question_amount);
    Sort_by_score(Faculty);
    Print_on_screen(Faculty);

    free(Faculty);
    free(weights);
    return;
}
