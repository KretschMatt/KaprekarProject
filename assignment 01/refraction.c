/**
 * Author: Matt Kretsch
 *
 *This program computes the angle of refraction using Snell’s Law.
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double refractiveIndexTwo, angleOfIncidence, angleOfRefraction1, angleOfRefractionF, angleOfIncidenceR;




  printf("Please enter your angle of incidence:\n");
  scanf("%lf", &angleOfIncidence);
  printf("Please enter your refractive index:\n");
  scanf("%lf", &refractiveIndexTwo);

  angleOfIncidenceR=angleOfIncidence * (M_PI / 180);
  angleOfRefraction1 = asin((1/refractiveIndexTwo) * (sin(angleOfIncidenceR)));
  angleOfRefractionF = angleOfRefraction1 * (180 / M_PI);

  printf("Angle of incidence: %lf degrees\n", angleOfIncidence);
  printf("Index of refraction: %lf\n", refractiveIndexTwo);
  printf("Angle of refraction: %lf degrees\n", angleOfRefractionF);
    return 0;
}
