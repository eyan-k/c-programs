//program to calculate compound interest
/*program to calculate compound interest
Athor:Ian waiguru
Reg no Ct101/G/24488/24
*/
#include <stdio.h>
#include <math.h>

int main()
{   
int principle;
float rate;
int time_in_years;

printf("input principle and press enter: ");
scanf("%d" ,&principle);
printf("Your principle is %d\n" ,principle);
printf("input rate and press enter : ");
scanf("%f" ,&rate);
printf("Your rate is %.2f\n" ,rate);
printf("input time in years and press enter: ");
scanf("%d" ,&time_in_years);
printf("Your time is %d\n" ,time_in_years);

float R = (1 + rate/100);
float T = pow(R,time_in_years);
int amount = principle*T;

printf("The compound interest is %d" ,amount - principle);
    return 0;
}