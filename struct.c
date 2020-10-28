#include <stdio.h>
#include <string.h>
#include "struct.h"
#include <stdlib.h>


struct gemstone * new_gemstone(int i, char *n, char *classification, long value) {

  struct gemstone *nu;

  nu = malloc( sizeof(struct gemstone) );

  strncpy(nu->name, n, sizeof(nu->name)-1);
  nu->id = i;
  strncpy(nu->classification, classification, sizeof(nu->classification)-1);
  nu->value = value;

  return nu;
}

void print_gemstone(struct gemstone *gemstone){
    printf("Gemstone name: %s\n", gemstone->name);
    printf("Gemstone ID  : %d\n", gemstone->id);
    printf("Gemstone classification: %s\n", gemstone->classification);
    printf("Gemstone dollar value: %d\n", gemstone->value);
}

void increase_value(struct gemstone *gemstone, long increase_by){
    gemstone->value = gemstone->value + increase_by;
}