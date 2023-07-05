#include <stdio.h>
int main(){
  float a, b, c, d;
  a=0;
  b=0;
  c=0;
  d=0;


  for (int i=0; i<15; i++){
    printf("i=%3d  ",i);
    printf("%10.5f  ",a);
    printf("%10.5f  ",b);
    printf("%10.5f  ",c);
    printf("%10.5f  \n",d);
    a = (b+c+2)/4;
    b = (a+d+2)/4;
    c = (a+d+6)/4;
    d = (b+c-3)/4;

  }
  return 0;
}
