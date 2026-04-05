#include <stdio.h>



void tulostaPaikallinenOsoite(){
  char lisatiedot[11];

  printf("syota merkkeja...\n");

  for(int i=0; i<10; i++){
    scanf(" %c", &lisatiedot[i]);
  }


  lisatiedot[10] = 0;


  char *p = &lisatiedot[0];
  char *q = &lisatiedot[10];

  printf("\n\n'lisatiedot' merkkijonon 1. merkin osoite on: %p ja lopetusmerkin osoite on: %p \n\n", p, q);
}





int main()
{
    tulostaPaikallinenOsoite();
    return 0;
}
