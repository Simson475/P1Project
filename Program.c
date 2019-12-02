#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FAKULTETSIZE 5
#define MAXCHAR 100

typedef struct weight{
    char custom_output[20];
    double weight_one, weight_two, weight_three, weight_four, weight_five;
}weight;

typedef struct fakulteter{
    char navn[15];
    double score;
}fakulteter;

int load_questions(weight weights[], int choice);
void get_questions(fakulteter fakultet[], weight weights[], int question_amount);
void question(fakulteter fakultet[], weight weights);
void get_input(int *input, char custom_output[]);

enum Fakulteter {Humaniora,Natur,Teknisk,Samfund,Sundhed,fakultetsvalg};

int main(void){
    int i, question_amount;
    fakulteter *fakultet= calloc(FAKULTETSIZE,sizeof(fakulteter));
    weight *weights = calloc(11,sizeof(weight));

    question_amount=load_questions(weights, fakultetsvalg);
    get_questions(fakultet, weights,question_amount);

    for (i=0;i<FAKULTETSIZE;i++){

        switch (i) {
            case 0:
                printf("Humaniora         "); break;
            case 1:
                printf("Naturvidenskab    "); break;
            case 2:
                printf("Teknik            "); break;
            case 3:
                printf("Samfundsvidenskab "); break;
            case 4:
                printf("Sundhedsvidenskab "); break;
            default:
                printf("Noget gik galt i printet."); break;
        }

        printf(" %.2lf \n",fakultet[i].score);
    }

	return 0; 
	
}

void get_questions(fakulteter fakultet[], weight weights[], int question_amount){
    int i=0;

    for ( i = 0; i < question_amount; i++){
        question(fakultet, weights[i]);
    }
    
    return;
}

void question(fakulteter fakultet[],weight weights){
    int Input=0;

    get_input(&Input, weights.custom_output);

    fakultet[Humaniora].score = fakultet[Humaniora].score + Input*weights.weight_one;
    fakultet[Natur].score = fakultet[Natur].score + Input*weights.weight_two;
    fakultet[Teknisk].score = fakultet[Teknisk].score + Input*weights.weight_three;
    fakultet[Samfund].score = fakultet[Samfund].score + Input*weights.weight_four;
    fakultet[Sundhed].score = fakultet[Sundhed].score + Input*weights.weight_five;

    return;
}

void get_input(int *Input, char custom_output[]){
    do{
    printf("Hvor glad er du for %s? (1-10)\n",custom_output);
    scanf("%d", Input);
    } while (*Input<1 || *Input>10);
    
    return;
}

int load_questions(weight weights[],int choice){
    int i=0;
    FILE *file_pointer;
    char str[MAXCHAR];

    switch (choice)
    {
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
        if (i>0){
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

    return i-1;
}