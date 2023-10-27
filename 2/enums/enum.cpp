#include <cstdio>

enum class Race {
  Dinan,
  Teklan,
  Ivyn,
  Moiran,
  Camite,
  Julian,
  Aidan
};

int main(){
  Race race = Race::Dinan;

  switch(race){
    case Race::Dinan: {
                        printf("You work hard.");
                      }break;
    case Race::Aidan: {
                        printf("yuh");
                      }break;
    default: {
               printf("default");
             }
  }
}
