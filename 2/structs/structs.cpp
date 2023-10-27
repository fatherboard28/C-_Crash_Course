#include <cstdio>

struct Book {
  char name[256];
  int year;
  int pages;
  bool hardcover;
};

int main(){
  Book neuromancer;
  neuromancer.pages = 271;
  

  //initialization stuff
  Book lotr{"lord of the rings", 2001, 1000, true};
  printf("neuromancer has %d pages", neuromancer.pages);
}
