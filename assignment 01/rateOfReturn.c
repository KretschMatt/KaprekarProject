/**
 * Author: Matt Kretsch
 *
 *This program computes the rate of return on an investment.
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

double annualRateOfReturn, tInYears, ARR1, ARR2;
double principal, years, weeks, days, finalValue;

printf("\nPlease Enter Initial Value Of Your Investment:\n");
printf("\nDollar Amount:\t");
scanf("%lf", &principal);

printf("\nPlease Enter The Time Of Your Investment, Press Enter After Each Entry\n");
printf("\nYears:\t");
scanf("%lf", &years);

printf("\nWeeks:\t");
scanf("%lf", &weeks);

printf("\nDays:\t");
scanf("%lf", &days);

printf("\nPlease Enter Final Value Of Your investment:\n");
printf("\nDollar Amount:\t");
scanf("%lf", &finalValue);


tInYears = years + (weeks / 52) + (days / 365);
ARR1 = (finalValue/principal);
ARR2 = (1/tInYears);
annualRateOfReturn = ((pow(ARR1, ARR2)) - 1) * 100;


printf("\nInitial Value:  $%lf\n", principal);
printf("Final Value:  $%lf\n", finalValue);
printf("Years:  %lf\n", tInYears);
printf("Annual Rate of Return:  %lf Percent\n", annualRateOfReturn);


    return 0;
}
