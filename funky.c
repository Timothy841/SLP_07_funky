#include <stdio.h>

void print_arr(int *a, int size);
double arr_avg(int *a, int size);
void copy_arr(int *a, int *b, int size);

int main(){
  int a[10] = {2,3,4,5,6,7,8,9,10,1};
  int size = sizeof(a)/sizeof(a[0]);
  int b[10];
  print_arr(a, size);
  printf("%lf\n", arr_avg(a, size));
  copy_arr(a, b, size);
  print_arr(b, size);
  return 0;
}

void print_arr(int *a, int size){
  int num;
  printf("[ ");
  for (num = 0; num<=size-1; num++){
    printf("%d ", a[num]);
  }
  printf("]\n");
}

double arr_avg(int *a, int size){
  int num;
  double avg = 0;
  for (num = 0; num<=size-1; num++){
    avg+=a[num];
  }
  avg/=size;
  return avg;
}

void copy_arr(int *a, int *b, int size){
  int num;
  for (num = 0; num<=size-1; num++){
    b[num] = a[num];
  }
}
