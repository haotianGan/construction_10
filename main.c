#include <stdio.h>
#include <string.h>
#include "struct.h"

int main(){
    struct gemstone *diamond;

    char *name = "Ocean Diamond";
    int ID = 500;
    long value = 1000;
    char *classification = "Super duper rare!";

    diamond = new_gemstone(ID, name, classification, value);
    print_gemstone(diamond);
    printf("\n Increasing worth of diamond by 50,000...\n");
    increase_value(diamond, 50000);
    printf("\n Printing diamond once more...\n\n");
    print_gemstone(diamond);

    

}