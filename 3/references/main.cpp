#include <cstdio>

struct Daddy{
  int age;
  char name[20];
};

void add_year(Daddy& dad){
  dad.age += 1;
}

int main(){
  Daddy jeff{21, "jeff"};
  printf("Dads age is: %d\n", jeff.age);
  add_year(jeff);
  printf("Dads age is: %d\n", jeff.age);
}
