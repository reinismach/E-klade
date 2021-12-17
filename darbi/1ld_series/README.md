Šī programma atrod izvēlētās x vērtības funkcijas vērtību, kas atrodas izvēlētajā apgabalā. Šajā metodē tiek salīdzināts rezultāts no Teilora rindām un parastās funkcijas. Grafikā var redzēt, ka palielinoties Teilora rindas kārtas skaitlim, funkcija arvien garāku gabalu ir vienāda ar pētāmo funkciju. Manā gadījumā pētāmā funkcija bija sin(x/2).

Kods:

#include <stdio.h>
#include <math.h>
double mans_sinuss(double x);
int main()
{
    long double a499, a500;
    double x, a0, S0, S499, S500;
    int k=0;

    printf("sin(x/2) aprēķināšana\n\n");
    printf("Lūdzu, ievadiet x vērtību: ");
    fflush(stdin);
    scanf("%lf", &x);

    printf("\nSummas izteiksme: \n\n");
    printf("               500\n");
    printf("              _____\n");
    printf("              %c          k     2*k+1   -2*k-1\n",92);
    printf("               %c     (-1)  *  x   *   2\n",92);
    printf("sin(%.2lf/2) =   >    _________________________\n", x);
    printf("               /\n");
    printf("              /____           (2*k+1)!\n");
    printf("               k=0\n\n");
    
    printf("Rekurences funkcionālā reizinātāja izteiksme: \n\n");
    printf("            2     -2\n");
    printf("    (-1) * x  *  2\n");
    printf("  _____________________\n");
    printf(" \n");
    printf("     (2*k) * (2*k+1)\n\n");

    printf("funkcijas definīcijas apgabals: x∈ R \n\n");

    a0 = pow(-1,0)*pow(x,2*0+1)*pow(2,-2*0-1)/(1.);
    S0 = a0;
    printf("a0   = %.2lf\tS0   = %.2lf\n", a0,S0);

    a499 = a0;
    S499 = S0;
    while(k<499)
    {
        k++;
        a499 *= (-1) *x*x * pow(2,-2) / ((2*k)*(2*k+1));
        S499 += a499;
    }
    printf("a499 = %Le\tS499 = %lf\n", a499, S499);

    a500 = a499 * (-1) *x*x * pow(2,-2) / ((2*500)*(2*500+1));
    S500 = S499 + a500;
    printf("a500 = %Le\tS500 = %lf\n", a500, S500);

    printf("Funkcijas vērtība izmantojot Teilora rindas izteiksmi = %lf\n", S500);
    
    double f1 = sin(x/2);
    printf("Funkcijas vērtība, izmantojot funkcijas izteiksmi = %lf\n", f1);

    return 0;
}

![sin(x:2)_grafiks](https://user-images.githubusercontent.com/90239563/146162386-9b159172-1eab-4893-bde9-182b45a50ed3.png)
https://user-images.githubusercontent.com/90239563/146162386-9b159172-1eab-4893-bde9-182b45a50ed3.png
