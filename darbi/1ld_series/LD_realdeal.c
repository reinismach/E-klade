#include <stdio.h>
#include <math.h>
double mans_sinuss(double x);
int main()
{
    double x, a0;
    long double a499, a499b=1, a500;
    int k, n;
    
    printf("Lūdzu, ievadiet x vērtību: ");
    scanf("%lf", &x);
    fflush(stdin);

    printf("\nSummas izteiksme: \n\n");
    printf("             500\n");
    printf("            _____\n");
    printf("            %c          k     2*k+1   -2*k-1\n",92);
    printf("             %c     (-1)  *  x   *   2\n",92);
    printf("sin(%.2lf) =   >    _________________________\n", x);
    printf("             /\n");
    printf("            /____           (2*k+1)!\n");
    printf("             k=0\n\n");
    
    printf("Rekurences funkcionālā reizinātāja izteiksme: \n\n");
    printf("          2     -4*k+2\n");
    printf("  (-1) * x  *  2\n");
    printf("  _____________________\n");
    printf(" \n");
    printf("     (2*k) * (2*k+1)\n\n");

    printf("funkcijas definīcijas apgabals: x∈ R \n\n");

    a0 = pow(-1,0)*pow(x,2*0+1)*pow(2,-2*0-1)/(1.);
    printf("a0 = %.8lf\n", a0);

    for(k=999 ; k>1 ; k--) a499b *= k;
    a499 = pow(-1,499)*pow(x,2*499+1)*pow(2,-2*499-1)/a499b;
    printf("a499 = %.8Lf\n", a499);

    a500 = pow(-1,500)*pow(x,2*500+1)*pow(2,-2*500-1)/((2*500)*(2*500+1));
    printf("a500 = %.8lf\n", a500);

    printf("Funkcijas vērtība izmantojot Teilora rindas izteiksmi = %.8lf\n", mans_sinuss(x));
    
    double f1 = sin(x/2);
    printf("Funkcijas vērtība, izmantojot funkcijas izteiksmi = %.8lf\n", f1);

    return 0;
}
double mans_sinuss(double x)
{
    double a,S;
    int k=0;

    a = pow(-1,k)*pow(x,2*k+1)*pow(2,-2*k-1)/(1.);
    S = a;
    //printf("%.2f\t%8.2f\t%8.2f\n", x,a,S);

    while(k<500)
    {
        k++;
        a *= (-1) *x*x * pow(2,-4*k+2) / ((2*k)*(2*k+1));
        S += a;
        //printf("%.2f\t%8.2f\t%8.2f\n", x,a,S);
    }
    return S;
}