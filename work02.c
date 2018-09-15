#include <stdio.h>

int main(){
  unsigned int a = 2200002350;
  char * ap = &a;

  printf("Original value: Hex - 0x%x, Decimal - %u\n",a,a);

  int i;
  for(i = 0; i < 4; i++){
    printf("byte #%d: %hhx\n",i,*ap);
    ap++;
  }

  printf("\nIncrementing by 1\n");
  printf("Original value: Hex - 0x%x, Decimal - %u\n",a,a);
  for(i = 0; i < 4; i++){
    ap--;
    *ap += 1;
  }

  printf("Modified value: Hex - 0x%x, Decimal - %u\n", a, a);

  printf("\nIncrementing by 16\n");
  printf("Original value: Hex - 0x%x, Decimal - %u\n",a,a);
  for(i = 0; i < 4; i++){
    *ap += 16;
    ap++;
  }
  printf("Modified value: Hex - 0x%x, Decimal - %u\n", a, a);

}
