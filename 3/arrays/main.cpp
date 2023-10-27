#include <cstdio>

struct College{
  char name[256];
};

//example where the array is decayed into a pointer
void print_name1(College* p_college){
  printf("%s College\n", p_college->name);
}

//proper way to handle arrays as pointers
void print_names(College* colleges, size_t n_colleges){
  for (size_t i = 0; i < n_colleges; i++){
    printf("%s College\n", colleges[i].name);
  }
}

int main(){
  College best_colleges[] = {"SBU", "MSU", "MU"};
  print_name1(best_colleges);
  print_names(best_colleges, sizeof(best_colleges) / sizeof(College));


  College *pColleges = best_colleges+2;
  printf("MU's name: %s\n", pColleges->name);
}
