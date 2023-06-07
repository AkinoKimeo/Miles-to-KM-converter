//This program converts Miles to Kilometers.
#include <stdio.h>
#define KMS_PER_MILE 1.609

int
maindoublefloat(void)
{
  double miles, kms;
  //double. must use %lf. since double is doublefloat. 
  /* get the distance in miles */
  printf("Enter the distance in miles > ");
  //scanf asks for input. %lf specifies float
  scanf("%lf", &miles);

  /*convert the distance to kilometers. */
  kms = KMS_PER_MILE * miles;

  /*Display the distance in kiometers. */
  printf("That equals %lf in kilometers. \n", kms);

  return (0);

}