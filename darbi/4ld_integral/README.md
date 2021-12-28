Šajā programmā tiek meklēts funkcijas integrālis izvēlētajā apgabalā ar izvēlēto precizitāti. Tiek pielietotas trīs metodes. Pirmā - taisnstūra metode, kur funkcijas laukums tiek sadalīts vairākos taisnstūros un tad tiek rēķināti un summēti to laukumi. Otrā - trapeču metode, kur taisnstūru vietā tiek pielietotas trapeces, kuru virsējās daļas seko funkcijas vērtībai. Šajā metodē arī tiek rēķināti un summēti trapeču laukumi. Trešā - Simpsona metode, kur tiek izmantoti otrās kārtas polinomi, lai izveidotu ieliekumu un vēl precīzāk sekotu funkcijas vērtībai. Šajā metodē tiek izmantoti uzreiz 2 intervāli, lai aprēķinātu laukumu, un tad tie tiek summēti ar nākamajiem diviem intervāliem. Pirmais un pēdējais intervāls tiek aprēķināts atsevišķi.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, eps, h, integr1=0., integr2, pirmais_integr, pedejais_integr;
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

    integr2 = ((b-a)*(sin(a/2)+sin(b/2))/n)+2*eps;
    while(fabs(integr2-integr1)>eps)
    {
        n *= 2;
        h = (b-a)/n;
        integr1 = integr2;
        integr2 = 0;
        for(k=0 ; k<n ; k++)
        integr2 += h*sin((a+(k+0.5)*h)/2);
    }
    printf("\nIntegrāļa vērtība, izmantojot taisnstūru metodi: %.2f\n", integr2);
    printf("Vajadzīgo intervālu skaits integrāļa aprēķinam: %d\n\n", n);
    n = 2;
    integr1 = 0;

    integr2 = ((b-a)*(sin(a/2)+sin(b/2))/n)+2*eps;
    while(fabs(integr2-integr1)>eps)
    {
        n *= 2;
        h = (b-a)/n;
        integr1 = integr2;
        integr2 = 0;
        for(k=0 ; k<n ; k++)
        integr2 += h*((sin((a+k*h)/2)+sin((a+(k+1)*h)/2))/2);
    }
    printf("Integrāļa vērtība, izmantojot trapeču meitodi: %.2f\n", integr2);
    printf("Vajadzīgo intervālu skaits integrāļa aprēķinam: %d\n\n", n);
    n = 2;
    integr1 = 0;

    integr2 = ((b-a)*(sin(a/2)+sin(b/2))/n)+2*eps;
    while(fabs(integr2-integr1)>eps)
    {
        n *= 2;
        h = (b-a)/n;
        integr1 = integr2;
        integr2 = 0;
        for(k=1 ; k<=n/2-1 ; k++)
        {
            integr2 += 2*(2*sin((a+(2*k-1)*h)/2)+sin((a+2*k*h)/2));
        }
        integr2 += sin(a/2)+sin(b/2)+4*sin((b-h)/2);
        integr2 *= h/3;
    }
    printf("Integrāļa vērtība, izmantojot simpsona meitodi: %.2f\n", integr2);
    printf("Vajadzīgo intervālu skaits integrāļa aprēķinam: %d\n", n);

    return 0;
}

![sin(x:2)_grafiks4](https://user-images.githubusercontent.com/90239563/147565150-08fd7f8c-ef53-4142-83e3-01ccd742f21f.png)

Attēls: https://user-images.githubusercontent.com/90239563/147565150-08fd7f8c-ef53-4142-83e3-01ccd742f21f.png
