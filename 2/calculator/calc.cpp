#include <cstdio>

enum class Operations {
  ADD,
  SUBTRACT,
  DIVIDE,
  MULTIPLY
};

struct Math {
  Math(Operations o){
    opp = o;
  }

  int calculator(int x, int y){
    switch (opp){
      case Operations::ADD:
      {
        return x + y;
      }break;
      case Operations::SUBTRACT:
      {
        return x - y;
      }break;
      case Operations::DIVIDE:
      {
        if (y != 0)
          return x / y;
      }break;
      case Operations::MULTIPLY:
      {
        return x * y;
      }break;
    }
    return 0;
  }

  private:
    Operations opp;
};


int main(){
  Math a{Operations::MULTIPLY};
  printf("12 * 8 = %d", a.calculator(12, 8));
}
