#include <cstdio>


struct Daddy {
  Daddy(int a){
    age = a;
  }

  int age;
  char name[20];
};

struct A {
  A(const int kd, int age) : killdeathratio {kd}, dad {age}{

  }

  void announce() const {
    printf("I am %d years old and my k/d is %d.\n", dad.age, killdeathratio);
  }

  const int killdeathratio;
  const Daddy dad;
};

int main(){
  A instance1{12, 1};
  A instance2{1, 111};

  instance1.announce();
  instance2.announce();
}
