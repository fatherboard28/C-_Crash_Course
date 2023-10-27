#include <cstdio>

int main(){
  //binary - prefix = 0b
  unsigned short a = 0b10101010;
  printf("%hu\n", a);
  //octal - prefix = 0
  int b = 0123;
  printf("%d\n", b);
  //hexadecimal - prefix = 0x
  unsigned long long d = 0xFFFFFFFFFFFFF;
  printf("%llu\n", d);
}
