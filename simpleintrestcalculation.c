//simole intrest calculation with principal, rate of intrest , timw
// use a function with formula Simp_Intr = (P*R*T)/100

#include <stdio.h>
double simp_intr(double P, double R, double T) 
{
    return (P*R*T)/100;
}

    int main ()
    {
    {  double P, R, T, Simp_Intr;
        printf("Enter the principal amount: ");
        scanf("%lf", &P);
        printf("Enter the rate of interest in percentage: ");
        scanf("%lf", &R);
        printf("Enter the time period in years: ");
        scanf("%lf", &T);
        Simp_Intr = simp_intr(P, R, T);
        printf("Simple Interest = %.2lf\n", Simp_Intr);
    }
    return 0;
    }
    

