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
    int Input = get_input(weights.custom_output);
    
    choices[0].score  = choices[0].score  + Input*weights.weight_one;
    choices[1].score  = choices[1].score  + Input*weights.weight_two;
    choices[2].score  = choices[2].score  + Input*weights.weight_three;
    choices[3].score  = choices[3].score  + Input*weights.weight_four;
    choices[4].score  = choices[4].score  + Input*weights.weight_five;
    choices[5].score  = choices[5].score  + Input*weights.weight_six;
    choices[6].score  = choices[6].score  + Input*weights.weight_seven;
    choices[7].score  = choices[7].score  + Input*weights.weight_eight;
    choices[8].score  = choices[8].score  + Input*weights.weight_nine;
    choices[9].score  = choices[9].score  + Input*weights.weight_ten;
    choices[10].score = choices[10].score + Input*weights.weight_eleven;
    choices[11].score = choices[11].score + Input*weights.weight_twelve;
    return;
}

int get_input(char custom_output[]){
    int Input;
    do{
        printf("Hvor glad er du for %s? (1-10)\n", custom_output);
        scanf("%d", &Input);
    } while (Input < 1 || Input > 10);
    
    return Input;
}

int load_questions(weight weights[], int choice){
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
        i++;
    }
    fclose(file_pointer);

    return i-1;
}
