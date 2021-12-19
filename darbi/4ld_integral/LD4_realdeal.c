#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, eps, h, integr1=0., integr2;
    int k, n=2;

    printf("Lūdzu, ievadiet minimuma robežas vērtību: ");
    fflush(stdin);
    scanf("%f", &a);

    printf("Lūdzu, ievadiet maksimuma robežas vērtību: ");
    fflush(stdin);
    scanf("%f", &b);

    printf("Lūdzu, ievadiet precizitātes vērtību: ");
    fflush(stdin);
    scanf("%f", &eps);

    integr2 = ((b-a)*(sin(a)+sin(b))/n)+2*eps;
    while(fabs(integr2-integr1)>eps)
    {
        n *= 2;
        h = (b-a)/n;
        integr1 = integr2;
        integr2 = 0;
        for(k=0 ; k<n ; k++)
        integr2 += h*sin((a+(k+0,5)*h));
    }
    printf("Integrāļa vērtība: %.2f\n", integr2);
}