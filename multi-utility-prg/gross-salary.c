#include<stdio.h>
int main(){
int hra;
int basic;
int da;
int ta;
float gross;

printf("Enter basic salary in ₹ = ");
scanf("%d", &basic);
printf("Enter DA in % = ");
scanf("%d", &da);
printf("Enter TA in % = ");
scanf("%d", &ta);
printf("Enter HRA in % = ");
scanf("%d", &hra);
printf("Gross Salary = %0.2f", basic * (1 + (hra + da + ta)/100.0));


    return 0;
}