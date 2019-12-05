#define FAKULTETSIZE 5
#define MAXCHAR 1000
#define MAXEDUCATIONS 20

typedef struct weight{
    char custom_output[20];
    double weight_one, weight_two, weight_three, weight_four, weight_five, weight_six,
           weight_seven, weight_eight, weight_nine, weight_ten, weight_eleven, weight_twelve;
} weight;

typedef struct fakulteter_struct{
    char navn[30];
    double score;
} fakulteter_struct;

enum Fakulteter {Humaniora, Natur, Teknisk, Samfund, Sundhed, fakultetsvalg};

int load_questions(weight weights[], int choice, fakulteter_struct names[]);
void get_questions(fakulteter_struct fakultet[], weight weights[], int question_amount);
void question(fakulteter_struct fakultet[], weight weights);
int get_input(char custom_output[]);
