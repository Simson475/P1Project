#define PRINTSIZE 5
#define MAXCHAR 1000
#define MAXEDUCATIONS 20
#define MAX_STR 50
#define NAME_SIZE 20

typedef struct Weight{
    char Custom_output[MAX_STR];
    double Weight_one, Weight_two, Weight_three, Weight_four, Weight_five, Weight_six,
           Weight_seven, Weight_eight, Weight_nine, Weight_ten, Weight_eleven, Weight_twelve;
} Weight;

typedef struct Faculty_struct{
    char Name[MAX_STR];
    double Score;
} Faculty_struct;

enum Faculties {Human, Nature, Tech, Social, Health, Faculty_choice};

int Load_questions(Weight Weights[], int choice, Faculty_struct Names[]);
void Get_questions(Faculty_struct Faculty[], Weight Weights[], int Question_amount);
void Question(Faculty_struct Faculty[], Weight Weights);
int Get_input(char Custom_output[]);
void Sort_by_score (Faculty_struct Choice[]);
int Compare (const void *a, const void *b);
void Result(Faculty_struct Choice[], char Name[]);
char* Get_users_name();
void Print_on_screen(Faculty_struct Choice[]);
void No_letters();
void Is_allocated(void *calloc_pointer);