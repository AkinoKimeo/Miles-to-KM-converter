//This program converts Miles to Kilometers.
#include <stdio.h>
#define KMS_PER_MILE 1.609

int
mainlongdoublefloat(void)
{
  long double miles, kms;
  //double. must use %lf. since double is doublefloat. 
  /* get the distance in miles */
  printf("Enter the distance in miles > ");
  //scanf asks for input. %lf specifies float
  scanf("%Lf", &miles);

  /*convert the distance to kilometers. */
  kms = KMS_PER_MILE * miles;

  /*Display the distance in kiometers. */
  printf("That equals %Lf in kilometers. \n", kms);

  return (0);

}