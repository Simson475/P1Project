#define PRINTSIZE 5
#define MAXCHAR 1000
#define MAXEDUCATIONS 20
#define MAX_STR 50
#define NAME_SIZE 20

typedef struct weight{
    char Custom_output[MAX_STR];
    double Weight_one, Weight_two, Weight_three, Weight_four, Weight_five, Weight_six,
           Weight_seven, Weight_eight, Weight_nine, Weight_ten, Weight_eleven, Weight_twelve;
} weight;

typedef struct fakulteter_struct{
    char navn[MAX_STR];
    double score;
} fakulteter_struct;

enum Fakulteter {Humaniora, Natur, Teknisk, Samfund, Sundhed, fakultetsvalg};

int load_questions(weight weights[], int choice, fakulteter_struct names[]);
void get_questions(fakulteter_struct fakultet[], weight weights[], int question_amount);
void question(fakulteter_struct fakultet[], weight weights);
int get_input(char custom_output[]);
void sort_by_score (fakulteter_struct choice[]);
int compare (const void *a, const void *b);
void Result(fakulteter_struct choice[], char name[]);
char* Get_users_name();
void print_on_screen(fakulteter_struct choice[]);
void no_letters();
