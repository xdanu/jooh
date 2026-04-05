#include <stdio.h>
#include <string.h>
struct Car{
  char brand[20];
  char model[50];
  int yearModel;
};

int main(){

struct Car autot[5];

for (int i = 0; i < 5; i++){
  printf("syota auton merkki, malli ja vuosimalli:\n");
  scanf("%s %s %d", autot[i].brand, autot[i].model, &autot[i].yearModel);
}


char vastaus[20];

int vertaus = 0;

while(1){
  printf("\nanna auton merkki tai lopeta:\n");
  scanf("%s", vastaus);

  if (strcmp(vastaus, "lopeta")==0){
    break;
  }


  int jatka=0;


  for(int i = 0; i<5; i++){
    if(strcmp(vastaus, autot[i].brand)==0){
      printf("\n %s %s %d\n", autot[i].brand, autot[i].model, autot[i].yearModel);
      jatka = 1;
    }
  }
}






return 0;
}
