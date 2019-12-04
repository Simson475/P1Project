#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "Naturvidenskab.h"
#include "Humaniora.h"
#include "Samfund.h"
#include "Sundhed.h"
#include "Teknisk.h"
#include "fakultet.h"


int main(void){
    Decide_faculty();
    Choose_faculty();
	return 0; 
	
}


void Choose_faculty(){
    int Faculty_Input;
    printf("Vælg dit ønskede fakultet:\n");
    printf("0 : Humaniora")
    scanf("%d",&Faculty_Input);

    switch (Faculty_Input)    {
    case Humaniora: 
        break;
    case Natur:
        break;
    case Teknisk:
        break;
    case Samfund:
        break;
    case Sundhed:
        break;
    
    default:
        break;
    }
}