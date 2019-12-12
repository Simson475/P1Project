#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utility.h"

/*stiller en række spørgsmål til brugeren*/
void Get_questions(Faculty_struct Choices[], Weight Weights[], int Question_amount){
    int i = 0;

    for (i = 0; i < Question_amount; i++){
        Question(Choices, Weights[i]);
    }
    
    return;
}

/*stiller de enkelte soørgsmål og giver score derefter*/
void Question(Faculty_struct Choices[], Weight Weights){
    int Input = Get_input(Weights.Custom_output);
    
    Choices[0].Score  = Choices[0].Score  + Input * Weights.Weight_one    ;
    Choices[1].Score  = Choices[1].Score  + Input * Weights.Weight_two    ;
    Choices[2].Score  = Choices[2].Score  + Input * Weights.Weight_three  ;
    Choices[3].Score  = Choices[3].Score  + Input * Weights.Weight_four   ;
    Choices[4].Score  = Choices[4].Score  + Input * Weights.Weight_five   ;
    Choices[5].Score  = Choices[5].Score  + Input * Weights.Weight_six    ;
    Choices[6].Score  = Choices[6].Score  + Input * Weights.Weight_seven  ;
    Choices[7].Score  = Choices[7].Score  + Input * Weights.Weight_eight  ;
    Choices[8].Score  = Choices[8].Score  + Input * Weights.Weight_nine   ;
    Choices[9].Score  = Choices[9].Score  + Input * Weights.Weight_ten    ;
    Choices[10].Score = Choices[10].Score + Input * Weights.Weight_eleven ;
    Choices[11].Score = Choices[11].Score + Input * Weights.Weight_twelve ;

    return;
}

/*stiller spørgsmål til brugeren, og beder om input*/
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

/*loader spørgsmål fra csv filer*/
int Load_questions(Weight Weights[], int Choice, Faculty_struct Names[]){
    int i = 0;
    FILE *File_pointer;
    char str[MAXCHAR];

    switch (Choice){
        case Faculty_choice:
            File_pointer = fopen("Operator_files/operator_fakultet_file.csv","r");
            break;
        case Human:
            File_pointer = fopen("Operator_files/operator_human_file.csv","r");
            break;
        case Nature:
            File_pointer = fopen("Operator_files/operator_natur_file.csv","r");
            break;
        case Tech:
            File_pointer = fopen("Operator_files/operator_teknik_file.csv","r");
            break;
        case Society:
            File_pointer = fopen("Operator_files/operator_samfund_file.csv","r");
            break;
        case Health:
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
                   Names[0].Name,
                   Names[1].Name,
                   Names[2].Name,
                   Names[3].Name,
                   Names[4].Name,
                   Names[5].Name,
                   Names[6].Name,
                   Names[7].Name,
                   Names[8].Name,
                   Names[9].Name,
                   Names[10].Name,
                   Names[11].Name);
        }
        i++;
    }
    fclose(File_pointer);

    return i - 1;
}

/*sorterer efter score*/
void Sort_by_score (Faculty_struct Choice[]) {
    
    qsort(Choice, MAXEDUCATIONS, sizeof(struct Faculty_struct), Compare);
    
    return;
}

/*sammenligningsfunktion til qsort*/
int Compare (const void *a, const void *b) {
    struct Faculty_struct *ia = (struct Faculty_struct *)a;
    struct Faculty_struct *ib = (struct Faculty_struct *)b;

    return (ib -> Score - ia -> Score);
}

/*ligger den prioriterede liste over fakulteter i en fil navngivet efter brugeren*/
void Result(Faculty_struct Choice[], char name[]){
    int i = 0;
    FILE *File_pointer;
    char File_name[30];
    sprintf(File_name, "%s.txt", name);
    File_pointer = fopen(File_name, "w"); 

        fprintf(File_pointer, "Name: %s\nPrioriterede uddannelser:\n", name);
    while (Choice[i].Score != 0 && i < 5){
        fprintf(File_pointer, "%d. %s\n", i + 1, Choice[i].Name);
        i++;
    }
    
    fclose(File_pointer);

    return;
}

/*Tager imod brugerens navn*/
char* Get_users_name(){
    char* Name = calloc(NAME_SIZE,sizeof(char));
    printf("Indtast Name: \n");
    scanf("%[^\n]", Name);
    printf("---------------------------------------------------\n");

    return Name;
}

/*Printer prioriteret liste til brugeren på skærmen*/
void Print_on_screen(Faculty_struct Choice[]){
    int i;
    
    printf("\n---------------------------------------------------\nDin prioriterede liste:\n");
    for (i = 0; i < PRINTSIZE; i++){
        if (Choice[i].Score != 0){
            if (Choice[i].Score == Choice[i + 1].Score){
                if (i == 4){
                    printf("%d. %s, har samme prioritering som %d\n", i + 1, Choice[i].Name, i + 2);
                    printf("%d. %s\n", i + 2, Choice[i + 1].Name);
                }
                else{
                    printf("%d. %s, har samme prioritering som %d\n", i + 1, Choice[i].Name, i + 2);
                }
            }
            else{
                printf("%d. %s\n", i + 1, Choice[i].Name);
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
