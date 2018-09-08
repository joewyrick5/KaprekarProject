/**
* Author: Joe Wyrick
* Date: 09/07/2018
*
* This program will find the Angle of refraction
*
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **) {

  double angleOfIncidence, indexOfRefraction, angleOfRefraction, angleOfRefractionDeg;

  //ask user to input angleOfIncidence and indexOfRefraction

  printf("Please enter the Angle of incidence: ");
  scanf("%lf", &angleOfIncidence );

  //disallows user to input a number below

  if (angleOfIncidence > 180 && angleOfIncidence < -180) {
    printf("Your input must be between [-180,180].\n");
    return 0;
  }

    printf("Please enter the Index of refraction: ");
    scanf("%lf", &indexOfRefraction );

  if (indexOfRefraction <= 1) {
      printf("Although it is possible, this program does not accept Index Refractions lower than 1.\n");
      return 0;
}



  //uses equations to find the angle of refraction
  double angleOfIncidenceRad = angleOfIncidence * (M_PI / 180);

  double equationPartOne = (sin(angleOfIncidenceRad)) / indexOfRefraction;

  angleOfRefraction = (asin(equationPartOne));

  angleOfRefractionDeg = angleOfRefraction * (180 / M_PI);

  printf("Angle of incidence: %f degrees\n", angleOfIncidence);
  printf("Index of refraction: %f\n", indexOfRefraction);
  printf("Angle of refraction: %f\n degrees", angleOfRefractionDeg);


    return 0;
}
