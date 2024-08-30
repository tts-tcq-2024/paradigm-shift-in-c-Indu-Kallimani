#include <stdio.h>
#include <assert.h>

int check_temperature(float temperature){
if(temperature < 0 ) || temperature > 45 ){
  printf("Temperature is out of range!\n");
  return 0;
  }
return 1;
}
int check_soc(float soc){
if(soc < 20 ) || soc > 80 ){
  printf("Soc is out of range!\n");
  return 0;
  }
return 1;
}
int check_chargerate(float chargerate){
if(chargeRate > 0.8 ){
  printf("charge Rate is out of range!\n");
  return 0;
}
return 1;
  }

int batteryIsOk(float temperatre , float soc, float chargerate){
return check_temperature(temperature) && check_soc(soc) && check_chargerate(chargerate);
  }

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
