  #include <stdio.h>
struct Car{
  char brand[20];
  char model[50];
  int yearModel;
};

int main(){

struct Car autot[3];

for (int i = 0; i < 3; i++){
  printf("syota auton merkki, malli ja vuosimalli:\n");
  scanf("%s %s %d", autot[i].brand, autot[i].model, &autot[i].yearModel);
  }

  printf("syotetyt autot:\n");
  for (int i = 0; i < 3; i++) {
  printf("%s %s %d\n", autot[i].brand, autot[i].model, autot[i].yearModel);
  }
return 0;
}
