#include <cstdio>

struct ClockOfTheLongNow {
  ClockOfTheLongNow (int y){
    if (!set_year(y)) year = 2018;
  }

  void add_year(){
    year++;
  }

  bool set_year(int y){
    if (y < 2009) return false;
    year = y;
    return true;
  }

  int get_year(){
    return year;
  }
  private:
    int year;
};

int main(){
  //this notation is in c++11 
  ClockOfTheLongNow clock{ 2029 };
  printf("Default Year: %d\n", clock.get_year());

  if (!clock.set_year(2018)){
    clock.set_year(2019);
  }

  clock.add_year();
  printf("Year: %d\n", clock.get_year());
}
