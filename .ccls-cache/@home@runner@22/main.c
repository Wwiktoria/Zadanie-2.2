#include <stdio.h>

float main(void) {
  float x,y;
  printf("Wprowadź kwotę:\n");
  scanf("%f", &x);
  printf("Wprowadź ilość lat:\n");
  scanf("%f",&y);
  for(float i=0;i<y;i++){
    x+=x*0.06;}
printf("Kwota po %.0f latach wynosi %.2f zł.",y,x);
  
return 0;
}