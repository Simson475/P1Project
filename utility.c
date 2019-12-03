#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"


void get_questions(fakulteter_struct fakultet[], weight weights[], int question_amount){
    int i = 0;

    for (i = 0; i < question_amount; i++){
        question(fakultet, weights[i]);
    }
    
    return;
}

void question(fakulteter_struct fakultet[], weight weights){
    int Input=get_input(weights.custom_output);
    
    fakultet[Humaniora].score = fakultet[Humaniora].score + Input*weights.weight_one;
    fakultet[Natur].score = fakultet[Natur].score + Input*weights.weight_two;
    fakultet[Teknisk].score = fakultet[Teknisk].score + Input*weights.weight_three;
    fakultet[Samfund].score = fakultet[Samfund].score + Input*weights.weight_four;
    fakultet[Sundhed].score = fakultet[Sundhed].score + Input*weights.weight_five;

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
            file_pointer=fopen("Operator_File.csv","r");
            break;
        case Humaniora:
            /* code */
            break;
        case Natur:
            /* code */
            break;
        case Teknisk:
            /* code */
            break;
        case Samfund:
            /* code */
            break;
        case Sundhed:
            /* code */
            break;
        default:
            break;
    }
    
    while (fgets(str, MAXCHAR, file_pointer) != NULL){
        if (i > 0){
            sscanf( str, "%[^;];%lf;%lf;%lf;%lf;%lf;",
                    weights[i-1].custom_output,
                    &weights[i-1].weight_one,
                    &weights[i-1].weight_two,
                    &weights[i-1].weight_three,
                    &weights[i-1].weight_four,
                    &weights[i-1].weight_five);
        }
        i++;
    }

    fclose(file_pointer);

    return i-1;
}
