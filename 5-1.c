#include <stdio.h>
struct Car {
  char brand[20];
  char model[50];
  int yearModel;
};

int main()
{
  struct Car car_1 = {"", "", 0};
    printf("syota merkki, malli ja vuosimalli:\n");
    scanf("%s", &car_1.brand);
    scanf("%s", &car_1.model);
    scanf("%d", &car_1.yearModel);

    printf("%s %s %d\n", car_1.brand, car_1.model, car_1.yearModel);
    return 0;
}
