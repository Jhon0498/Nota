#include <stdio.h>

int main(void) {


  float note1 = 0, note2 = 0, note3 = 0, average = 0;

  printf("Enter the first note: ");
  scanf("%f", &note1);

  printf("Enter the second note ");
  scanf("%f", &note2);

  printf("Enter the third note: ");
  scanf("%f", &note3);

  average=(note1+note2+note3) / 3;

 printf("The average is the same:  %.2f\n", average);
  return 0;
}