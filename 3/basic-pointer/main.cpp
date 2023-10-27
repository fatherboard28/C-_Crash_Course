#include <cstdio>

struct Daddy{
  int age;
  char name[20];
};

int main(){
  int gettysburg;
  printf("gettysburg: %d\n", gettysburg);
  int* gettysburg_address = &gettysburg;
  printf("gettysburg_address: %p\n", gettysburg_address);
  int x = *gettysburg_address;
  printf("x: %d\n", x);
  printf("x: %d\n", *gettysburg_address);

  Daddy dad{12, "Jeff"};
  Daddy* p_dad = &dad;
  printf("dad age: %d\n", dad.age);

  p_dad -> age = 22;
  printf("dad age: %d\n", dad.age);
  printf("dad age: %d\n", p_dad->age);
}
