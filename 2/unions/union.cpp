#include <cstdio>

union Variant {
  char string[10];
  int integer;
  double floating_point;
};

int main(){
  Variant v;
  v.integer = 42;
  printf("the ultimate answer: %d\n", v.integer);
  v.floating_point = 2.718272318;
  printf("Floating point number: %f\n", v.floating_point);
  printf("Dumpster fire: %d\n", v.integer);
}
