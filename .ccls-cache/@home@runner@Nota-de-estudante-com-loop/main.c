#include <stdio.h>

int main(void) {

 int nNota;
 float nota, soma = 0, media;
  
  printf("Digite o número nota: ");
  scanf("%d", &nNota);

  for(int i = 1; i <= nNota; i++){
    printf("Digite a nota %d\n", i);
    scanf("%f", &nota);
    soma+=nota;
}   
    media= soma / nNota;

 printf("A média das %d notas é: %.2f\n", nNota, media);
  return 0;
}