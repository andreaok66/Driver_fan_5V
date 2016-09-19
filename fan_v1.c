#include<wiringPi.h>
#include<stdio.h>

int main(void){ 
  int maxTemp=42;
  FILE *temperatureFile;
  temperatureFile=fopen("/sys/class/thermal/thermal_zone0/temp","r");
  if(temperatureFile==NULL)
    return 0;
  fcanf(temperatureFile,"%lf",&T);
  T/=1000;
  printf("Temperature: %.3f C\n",T);
  wiringPiSetup();
  pinMode(0,OUTPUT);
  if(T>=maxTemp){
    digitalWrite(0,HIGH);
    printf("FAN ON\n");
  }
  else{
    sigitalWrite(0,LOW);
    printf("FAN OFF\n");
  }
  return 0;
}
