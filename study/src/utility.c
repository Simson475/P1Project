#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"


void Get_questions(fakulteter_struct Choices[], weight Weights[], int Question_amount){
    int i = 0;

    for (i = 0; i < Question_amount; i++){
        Question(Choices, Weights[i]);
    }
    
    return;
}

void Question(fakulteter_struct Choices[], weight Weights){
    int Input = Get_input(Weights.Custom_output);
    
    Choices[0].score  = Choices[0].score  + Input * Weights.Weight_one    ;
    Choices[1].score  = Choices[1].score  + Input * Weights.Weight_two    ;
    Choices[2].score  = Choices[2].score  + Input * Weights.Weight_three  ;
    Choices[3].score  = Choices[3].score  + Input * Weights.Weight_four   ;
    Choices[4].score  = Choices[4].score  + Input * Weights.Weight_five   ;
    Choices[5].score  = Choices[5].score  + Input * Weights.Weight_six    ;
    Choices[6].score  = Choices[6].score  + Input * Weights.Weight_seven  ;
    Choices[7].score  = Choices[7].score  + Input * Weights.Weight_eight  ;
    Choices[8].score  = Choices[8].score  + Input * Weights.Weight_nine   ;
    Choices[9].score  = Choices[9].score  + Input * Weights.Weight_ten    ;
    Choices[10].score = Choices[10].score + Input * Weights.Weight_eleven ;
    Choices[11].score = Choices[11].score + Input * Weights.Weight_twelve ;

    return;
}

int Get_input(char Custom_output[]){
    int Input = 0, Scan_result;
    do{
        printf("Hvor glad er du for %s? (1-10)\n", Custom_output);
        Scan_result = scanf("%d", &Input);

        if (Scan_result == 0){
            No_letters();
        }
    } while ((Input < 1 || Input > 10) || (Scan_result != 1));

    return Input;
}

int Load_questions(weight Weights[], int Choice, fakulteter_struct Names[]){
    int i = 0;
    FILE *File_pointer;
    char str[MAXCHAR];

    switch (Choice){
        case fakultetsvalg:
            File_pointer = fopen("Operator_files/operator_fakultet_file.csv","r");
            break;
        case Humaniora:
            File_pointer = fopen("Operator_files/operator_human_file.csv","r");
            break;
        case Natur:
            File_pointer = fopen("Operator_files/operator_natur_file.csv","r");
            break;
        case Teknisk:
            File_pointer = fopen("Operator_files/operator_teknik_file.csv","r");
            break;
        case Samfund:
            File_pointer = fopen("Operator_files/operator_samfund_file.csv","r");
            break;
        case Sundhed:
            File_pointer = fopen("Operator_files/operator_sundhed_file.csv","r");
            break;
        default:
            break;
    }
    
    while (fgets(str, MAXCHAR, File_pointer) != NULL){
        if (i > 0){
            sscanf(str, "%[^;];%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;",
                     Weights[i - 1].Custom_output,
                    &Weights[i - 1].Weight_one,
                    &Weights[i - 1].Weight_two,
                    &Weights[i - 1].Weight_three,
                    &Weights[i - 1].Weight_four,
                    &Weights[i - 1].Weight_five,
                    &Weights[i - 1].Weight_six,
                    &Weights[i - 1].Weight_seven,
                    &Weights[i - 1].Weight_eight,
                    &Weights[i - 1].Weight_nine,
                    &Weights[i - 1].Weight_ten,
                    &Weights[i - 1].Weight_eleven,
                    &Weights[i - 1].Weight_twelve);
        }
        else if (i == 0){
            sscanf(str, ";%[^;\n];%[^;\n];%[^;\n];%[^;\n];%[^;\n];%[^;\n];%[^;\n];%[^;\n];%[^;\n];%[^;\n];%[^;\n];%[^;\n]", 
                   Names[0].navn,
                   Names[1].navn,
                   Names[2].navn,
                   Names[3].navn,
                   Names[4].navn,
                   Names[5].navn,
                   Names[6].navn,
                   Names[7].navn,
                   Names[8].navn,
                   Names[9].navn,
                   Names[10].navn,
                   Names[11].navn);
        }
        i++;
    }
    fclose(File_pointer);

    return i - 1;
}

void Sort_by_score (fakulteter_struct Choice[]) {
    
    qsort(Choice, MAXEDUCATIONS, sizeof(struct fakulteter_struct), Compare);
    
    return;
}

int Compare (const void *a, const void *b) {
    struct fakulteter_struct *ia = (struct fakulteter_struct *)a;
    struct fakulteter_struct *ib = (struct fakulteter_struct *)b;

    return (ib -> score - ia -> score);
}

void Result(fakulteter_struct Choice[], char name[]){
    int i = 0;
    FILE *File_pointer;
    char File_name[30];
    sprintf(File_name, "%s.txt", name);
    File_pointer = fopen(File_name, "w"); 

        fprintf(File_pointer, "Navn: %s\nPrioriterede uddannelser:\n", name);
    while (Choice[i].score != 0 && i < 5){
        fprintf(File_pointer, "%d. %s\n", i + 1, Choice[i].navn);
        i++;
    }
    
    fclose(File_pointer);

    return;
}

char* Get_users_name(){
    char* Name = calloc(NAME_SIZE,sizeof(char));
    printf("Indtast navn: \n");
    scanf("%[^\n]", Name);
    printf("---------------------------------------------------\n");

    return Name;
}

void Print_on_screen(fakulteter_struct Choice[]){
    int i;
    
    printf("\n---------------------------------------------------\nDin prioriterede liste:\n");
    for (i = 0; i < PRINTSIZE; i++){
        if (Choice[i].score != 0){
            if (Choice[i].score == Choice[i + 1].score){
                if (i == 4){
                    printf("%d. %s, har samme prioritering som %d\n", i + 1, Choice[i].navn, i + 2);
                    printf("%d. %s\n", i + 2, Choice[i + 1].navn);
                }
                else{
                    printf("%d. %s, har samme prioritering som %d\n", i + 1, Choice[i].navn, i + 2);
                }
            }
            else{
                printf("%d. %s\n", i + 1, Choice[i].navn);
            }
        }
        else{
        }
    }
    printf("---------------------------------------------------\n");

    return;
}

/*tager imod bogstaver og fjerner dem*/
void No_letters(){
    char ch = 0;

    while (ch != '\n'){
        scanf("%c", &ch);
    }
     
    printf("Bogstaver er ikke tilladt! \n");
    return;
}

/*tjekker om data er allokeret*/
void Is_allocated(void *calloc_pointer){
    if (calloc_pointer == NULL){
        printf("MEMORY ER IKKE ALLOKERET. LUKKER PROGRAMMET");
        exit(EXIT_FAILURE);
    }
    else{
        return;
    }    
}
