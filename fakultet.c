#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"
#include "fakultet.h"

void name_faculty(fakulteter_struct fakultet[]){

    strcpy(fakultet[Sundhed].navn,"Sundhed");
    strcpy(fakultet[Humaniora].navn,"Humaniora");
    strcpy(fakultet[Samfund].navn,"Samfundsfag");
    strcpy(fakultet[Teknisk].navn,"Teknisk");
    strcpy(fakultet[Natur].navn,"Naturvidenskab");

    return;
}