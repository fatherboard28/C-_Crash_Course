#include <cstdio>

int main(){
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* p_upper = upper; //equal to &upper[0]

  lower[3] = 'd'; //now containes a b c d e \0
  p_upper[3] = 'D'; //now containes A B C D E \0

  char letter_d = lower[3]; //equals d
  char letter_D = p_upper[3]; //equals D

  printf("lower: %s\nupper:%s", lower, upper);

  //super bad.. buffer overflow could cause the program to do litterally anything
  lower[7] = 'g';
}
