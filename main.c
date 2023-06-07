//This program converts Miles to Kilometers.
#include <stdio.h>
#define KMS_PER_MILE 1.609

int
main(void)
{
  double miles, kms;
  //distance in miles equivalent distance in kilometers
  /* get the distance in miles */
  printf("Enter the distance in miles > ");
  scanf("%lf", &miles);

  /*convert the distance to kilometers. */
  kms = KMS_PER_MILE * miles;

  /*Display the distance in kiometers. */
  printf("That equals %f in kilometers. \n", kms);

  return (0);

}