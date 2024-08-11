#include "something.h"
/* #include "raylib/include/raylib.h" */
#include <stdio.h>
#include <stdlib.h>





int foo(int x, int y)
{
  return x + y;
}


typedef struct MotorFunctions {
  int  (*bruh)(int, int);
} MotorFunctions;


struct Modules {
  int something : 4;
};


typedef struct ipv4 {
  int version      : 4;
  int HELEN        : 4;
  int service_type : 4;
  int total_length : 16;
} ipv4;


typedef struct Nueron {
  int dendrite;
  int axon;
} Nueron;


typedef struct Brain_stem {
  int curcial;
  char* cerebellum;
} Brain_stem;

typedef struct Limbic {
  char* thalamus; // Everything comes in here, that is all kinds of sensing (sensing then estimate???) except olfactory (relay station then goes to cortex)
                  // Not just a relay
  char* hippocampus;
  char* amygdala; // fighting, fleeing, feeding, fucking
} Limbic;

typedef struct Cortex {
  char * vis;
  char* olf;
  char* motor;

} Cortex;

typedef struct Brain {
  Brain_stem a;
  Limbic l;

} Brain;






int main(){

  const int width = 640;
  const int height = 420;

  MotorFunctions *mf = (MotorFunctions*)malloc(sizeof(MotorFunctions));
  /* mf->bruh = foo; */
  printf("%d\n", mf->bruh(1,2));
  /* int (*f) = foo; */


  return 0;
}
