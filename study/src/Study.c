#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utility.h"
#include "Study.h"


void Decide_study(char* Name, int Faculty_choice){
    int Question_amount;
    Faculty_struct *Study = calloc(MAXEDUCATIONS, sizeof(Faculty_struct));
    Weight *weights = calloc(MAXEDUCATIONS, sizeof(Weight));
    Is_allocated(Study);
    Is_allocated(weights);

    printf("Besvar foelgende: \n");
    Question_amount = Load_questions(weights, Faculty_choice, Study);
    Get_questions(Study, weights, Question_amount);
    Sort_by_score(Study);
    Result(Study, Name);
    Print_on_screen(Study);
        
    free(Study);
    free(weights);
    free(Name);
    return;
}
