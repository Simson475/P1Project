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
    
    choices[0].score  = choices[0].score  + input*weights.weight_one    ;
    choices[1].score  = choices[1].score  + input*weights.weight_two    ;
    choices[2].score  = choices[2].score  + input*weights.weight_three  ;
    choices[3].score  = choices[3].score  + input*weights.weight_four   ;
    choices[4].score  = choices[4].score  + input*weights.weight_five   ;
    choices[5].score  = choices[5].score  + input*weights.weight_six    ;
    choices[6].score  = choices[6].score  + input*weights.weight_seven  ;
    choices[7].score  = choices[7].score  + input*weights.weight_eight  ;
    choices[8].score  = choices[8].score  + input*weights.weight_nine   ;
    choices[9].score  = choices[9].score  + input*weights.weight_ten    ;
    choices[10].score = choices[10].score + input*weights.weight_eleven ;
    choices[11].score = choices[11].score + input*weights.weight_twelve ;

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
            file_pointer=fopen("operator_fakultet_file.csv","r");
            break;
        case Humaniora:
            file_pointer=fopen("operator_human_file.csv","r");
            break;
        case Natur:
            file_pointer=fopen("operator_natur_file.csv","r");
            break;
        case Teknisk:
            file_pointer=fopen("operator_teknik_file.csv","r");
            break;
        case Samfund:
            file_pointer=fopen("operator_samfund_file.csv","r");
            break;
        case Sundhed:
            file_pointer=fopen("operator_sundhed_file.csv","r");
            break;
        default:
            break;
    }
    
    while (fgets(str, MAXCHAR, file_pointer) != NULL){
        if (i > 0){
            sscanf(str, "%[^,],%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,",
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
            sscanf(str, ",%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n]", 
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

void sort_by_score (fakulteter_struct choice[]) {
    
    qsort(choice, FAKULTETSIZE, sizeof(struct fakulteter_struct), compare);
    
    return;
}

int compare (const void *a, const void *b) {
    struct fakulteter_struct *ia = (struct fakulteter_struct *)a;
    struct fakulteter_struct *ib = (struct fakulteter_struct *)b;

    return (ia -> score - ib -> score);
}