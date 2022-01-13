Šajā programmā tiek meklēts funkcijas integrālis izvēlētajā apgabalā ar izvēlēto precizitāti. Tiek pielietotas trīs metodes. Pirmā - taisnstūra metode, kur funkcijas laukums tiek sadalīts vairākos taisnstūros un tad tiek rēķināti un summēti to laukumi. Otrā - trapeču metode, kur taisnstūru vietā tiek pielietotas trapeces, kuru virsējās daļas seko funkcijas vērtībai. Šajā metodē arī tiek rēķināti un summēti trapeču laukumi. Trešā - Simpsona metode, kur tiek izmantoti otrās kārtas polinomi, lai izveidotu ieliekumu un vēl precīzāk sekotu funkcijas vērtībai. Šajā metodē tiek izmantoti uzreiz 2 intervāli, lai aprēķinātu laukumu, un tad tie tiek summēti ar nākamajiem diviem intervāliem. Pirmais un pēdējais intervāls tiek aprēķināts atsevišķi. Manis pētītā funkcija ir sin(x/2).

Kods:
```
#include <stdio.h>
#include <math.h>

int main()
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
```

Rezultāts:

<img width="789" alt="LD4_rezultats" src="https://user-images.githubusercontent.com/90239563/149152927-e77bf22d-8c5e-4558-81b6-0f1c092439cf.png">

Grafiks:

![LD4_grafiks](https://user-images.githubusercontent.com/90239563/149154239-7e113a3d-3db6-487a-804e-c3d4144691e8.png)

Gnuplot script:
```
# Scale font and line width (dpi) by changing the size! It will always display stretched.
set terminal svg size 600,400 enhanced fname 'arial'  fsize 10 butt solid
set output 'out.svg'

# Key means label...
set key inside bottom right
set xlabel 'x'
set ylabel 'y'
set title 'sin(x/2) integrāļa vērtība'
set grid
plot [-5:3] [-1.1:1.1] sin(x/2) with impulses
```

Pierādījums no Wolfram Alpha: 

<img width="795" alt="Screenshot 2022-01-12 at 16 19 24" src="https://user-images.githubusercontent.com/90239563/149157555-5c013b74-55bc-47ed-9633-c0071aee15b2.png">
https://user-images.githubusercontent.com/90239563/149157555-5c013b74-55bc-47ed-9633-c0071aee15b2.png


md faila skats iekšpusē: https://raw.githubusercontent.com/reinismach/RTR105/main/darbi/4ld_integral/README.md
