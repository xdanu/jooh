#include <stdio.h>


void tulostaPointteri(char* merkkiPointteri){
  char* ekaosoite = merkkiPointteri;

  while (*merkkiPointteri != 0){
    merkkiPointteri++;
  }
  printf("\n\n'lisatiedot' merkkijonon 1. merkin osoite on: %p ja lopetusmerkin osoite on: %p \n\n", ekaosoite, merkkiPointteri);
}

int main()
{

  char lisatiedot[11];

  printf("syota merkkeja...\n");
  for(int i=0; i<10; i++){
    scanf(" %c", &lisatiedot[i]);
  }

  lisatiedot[10] = 0;

  tulostaPointteri(lisatiedot);

    return 0;
}
