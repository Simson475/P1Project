#include <stdio.h>
#include <stdlib.h>

#define NUMBEROFQUESTIONS 10
#define FAKULTETSIZE 5

void Questions(double Fakultet[]);
void Matematik(double Fakultet[]);
void Dansk(double Fakultet[]);
void Engelsk(double Fakultet[]);
void Fysik(double Fakultet[]);
void Historie(double Fakultet[]);
void AndetSprog(double Fakultet[]);
void Samfundsfag(double Fakultet[]);
void Kemi(double Fakultet[]);
void Religion(double Fakultet[]);
void Biologi(double Fakultet[]);

enum Fakulteter {Humaniora,Natur,Teknisk,Samfund,Sundhed};

int main(void){
    int i;
    double Fakultet[]={0,0,0,0,0};
    Questions(Fakultet);

    for (i=0;i<FAKULTETSIZE;i++){

        printf("%.4lf \n",Fakultet[i]);
    }

	return 0; 
	
}

void Questions(double Fakultet[]){
    int i=0;

    printf("");
    for (i=0; i<NUMBEROFQUESTIONS;i++){

        switch (i)
        {
        case 0: 
            Matematik(Fakultet); break;

        case 1: 
            Dansk(Fakultet); break;

        case 2: 
            Fysik(Fakultet); break;

        case 3: 
            Kemi(Fakultet); break;

        case 4: 
            Engelsk(Fakultet); break;

        case 5: 
            Historie(Fakultet); break;
        
        case 6:
            AndetSprog(Fakultet); break;
        
        case 7:
            Samfundsfag(Fakultet); break;
        
        case 8:
            Religion(Fakultet); break;
        
        case 9:
            Biologi(Fakultet); break;
        default:
            printf("Der skete en fejl!");
            break;
        }
    }

    return;
}

void Matematik(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Matematik? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.1;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.8;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.8;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.5;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.6;

    return;
}

void Dansk(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Dansk? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.9;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.3;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.3;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.7;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.3;

    return;
}

void Fysik(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Fysik? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.1;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.9;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.8;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.3;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.3;

    return;
}

void Kemi(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Kemi? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.1;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.9;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.6;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.1;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.6;

    return;
}

void Engelsk(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Engelsk? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.8;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.6;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.7;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.7;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.6;

    return;
}

void Historie(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Historie? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.8;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.2;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.3;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.8;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.4;

    return;
}

void AndetSprog(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for dit andet fremmedsprog? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.7;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.1;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.2;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.4;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.4;

    return;
}

void Samfundsfag(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Samfundsfag? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.6;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.2;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.5;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.9;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.7;

    return;
}

void Religion(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Religion? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.7;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.1;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.1;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.4;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.3;

    return;
}

void Biologi(double Fakultet[]){
    int Input;
    printf("Hvor glad er du for Biologi? (1-10)\n");
    scanf("%d", &Input);

    Fakultet[Humaniora] = Fakultet[Humaniora] + Input*0.2;
    Fakultet[Natur] = Fakultet[Natur] + Input*0.9;
    Fakultet[Teknisk] = Fakultet[Teknisk] + Input*0.7;
    Fakultet[Samfund] = Fakultet[Samfund] + Input*0.2;
    Fakultet[Sundhed] = Fakultet[Sundhed] + Input*0.8;

    return;
}



