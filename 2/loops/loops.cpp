#include <cstddef>
#include <cstdio>

int main(){
  //iterative loops
  unsigned long max = 0;
  unsigned long vals[] = {10, 50, 20, 40, 0};
  for (size_t i = 0; i < 5; i++){
    if (vals[i] > max) max = vals[i];
  }
  printf("The max value is %lu\n", max);

  //range based loops
  max = 0;
  for(unsigned long value : vals) {
    if (value > max) max = value;
  }
  printf("The max value is %lu\n", max);
}
