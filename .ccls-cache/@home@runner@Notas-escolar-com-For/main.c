#include <stdio.h>

int main(){

  int nNotas;
  float nota, soma = 0, media;

  printf("Digite a quantidade de nota: ");
  scanf("%d", &nNotas);

  for(int i = 1; i <= nNotas; i++){
    printf("Digite nota %d: ", i);
    scanf("%f", &nota);
    soma+= nota;
  }
  media = soma / nNotas;
  
  printf("A média de %d é: %.2f\n", nNotas, media);
  return 0;
}