#include <stdio.h>
int main(){
  unsigned int x = 3e9;
  char * y = &x;
  printf("%x\n", x);
  //printf("%p\n", y);
  printf("%02hhx\n", *(y++));
  printf("%hhx\n", *(y++));
  printf("%hhx\n", *(y++));
  printf("%hhx\n", *(y++));

  y = &x;
  printf("\nIncrement by one\n");
  printf("%02hhx\n", *(y++)+1);
  printf("%hhx\n", *(y++)+1);
  printf("%hhx\n", *(y++)+1);
  printf("%hhx\n", *(y++)+1);

  y = &x;
  printf("\nIncrement by sixteen\n");
  printf("%02hhx\n", *(y++)+16);
  printf("%hhx\n", *(y++)+16);
  printf("%hhx\n", *(y++)+16);
  printf("%hhx\n", *(y++)+16);
  return 0;
}
