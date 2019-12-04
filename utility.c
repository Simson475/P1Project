#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"


void get_questions(fakulteter_struct choices[], weight weights[], int question_amount){
    int i = 0;

    for (i = 0; i < question_amount; i++){
        question(choices, weights[i]);
    }
    
    return;
}

void question(fakulteter_struct choices[], weight weights){
    int input = get_input(weights.custom_output);
    
    sizeof(choices) > 0  ? choices[0].score  = choices[0].score  + input*weights.weight_one    : 0;
    sizeof(choices) > 1  ? choices[1].score  = choices[1].score  + input*weights.weight_two    : 0;
    sizeof(choices) > 2  ? choices[2].score  = choices[2].score  + input*weights.weight_three  : 0;
    sizeof(choices) > 3  ? choices[3].score  = choices[3].score  + input*weights.weight_four   : 0;
    sizeof(choices) > 4  ? choices[4].score  = choices[4].score  + input*weights.weight_five   : 0;
    sizeof(choices) > 5  ? choices[5].score  = choices[5].score  + input*weights.weight_six    : 0;
    sizeof(choices) > 6  ? choices[6].score  = choices[6].score  + input*weights.weight_seven  : 0;
    sizeof(choices) > 7  ? choices[7].score  = choices[7].score  + input*weights.weight_eight  : 0;
    sizeof(choices) > 8  ? choices[8].score  = choices[8].score  + input*weights.weight_nine   : 0;
    sizeof(choices) > 9  ? choices[9].score  = choices[9].score  + input*weights.weight_ten    : 0;
    sizeof(choices) > 10 ? choices[10].score = choices[10].score + input*weights.weight_eleven : 0;
    sizeof(choices) > 11 ? choices[11].score = choices[11].score + input*weights.weight_twelve : 0;

    return;
}

int get_input(char custom_output[]){
    int input;
    do{
        printf("Hvor glad er du for %s? (1-10)\n", custom_output);
        scanf("%d", &input);
    } while (input < 1 || input > 10);
    
    return input;
}

int load_questions(weight weights[], int choice, fakulteter_struct names[]){
    int i = 0;
    FILE *file_pointer;
    char str[MAXCHAR];

    switch (choice){
        case fakultetsvalg:
            file_pointer=fopen("Fakultet_weight.csv","r");
            break;
        /*case Humaniora:
            break;
        case Natur:
            break;
        case Teknisk:
            break;
        case Samfund:
            break;
        case Sundhed:
            break;*/
        default:
            break;
    }
    
    while (fgets(str, MAXCHAR, file_pointer) != NULL){
        if (i > 0){
            sscanf(str, "%[^;];%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;",
                     weights[i-1].custom_output,
                    &weights[i-1].weight_one,
                    &weights[i-1].weight_two,
                    &weights[i-1].weight_three,
                    &weights[i-1].weight_four,
                    &weights[i-1].weight_five,
                    &weights[i-1].weight_six,
                    &weights[i-1].weight_seven,
                    &weights[i-1].weight_eight,
                    &weights[i-1].weight_nine,
                    &weights[i-1].weight_ten,
                    &weights[i-1].weight_eleven,
                    &weights[i-1].weight_twelve);
        }
        else if (i == 0){
            sscanf(str, ";%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;", 
                   names[0].navn,
                   names[1].navn,
                   names[2].navn,
                   names[3].navn,
                   names[4].navn,
                   names[5].navn,
                   names[6].navn,
                   names[7].navn,
                   names[8].navn,
                   names[9].navn,
                   names[10].navn,
                   names[11].navn);
        }
        i++;
    }
    fclose(file_pointer);

    return i-1;
}
