#include <stdio.h>
double CelToFah(double cel);
double FahToCel(double fal);

int main(){
    double deg;
    scanf("%lf", &deg);
    printf("%f %f", CelToFah(deg), FahToCel(deg));
}

double CelToFah(double cel){
    return 1.8*cel+32;
}

double FahToCel(double fal){
    return (fal-32)/1.8;
}