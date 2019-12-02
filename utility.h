#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FAKULTETSIZE 5
#define MAXCHAR 100
#define MAXEDUCATIONS 11

typedef struct weight{
    char custom_output[20];
    double weight_one, weight_two, weight_three, weight_four, weight_five;
}weight;

typedef struct fakulteter_struct{
    char navn[15];
    double score;
}fakulteter_struct;

enum Fakulteter {Humaniora,Natur,Teknisk,Samfund,Sundhed,fakultetsvalg};

int load_questions(weight weights[], int choice);
void get_questions(fakulteter_struct fakultet[], weight weights[], int question_amount);
void question(fakulteter_struct fakultet[], weight weights);
void get_input(int *input, char custom_output[]);
