Šī programma atrod x vērtību izvēlētajai funkcijas vērtībai iepriekš izvēlētajā apgabalā. Šajā metodē tiek realizēta saknes meklēšana, izmantojot vērtību zīmes jeb plusus, mīnusus.

Kods:

#include <stdio.h>

#include <math.h>

int main()
{
    
    float a, b, c, x, precizitate, a1, b1;
    
    printf("Lūdzu, ievadiet minimālo robežas vērtību: ");
    fflush(stdin);
    scanf("%f", &a);
    a1 = a;

    printf("Lūdzu, ievadiet maksimālo robežas vērtību: ");
    fflush(stdin);
    scanf("%f", &b);
    b1 = b;

    printf("Lūdzu, ievadiet sin(x/2) = c vērtību: ");
    fflush(stdin);
    scanf("%f", &c);

    printf("Lūdzu, ievadiet vēlamo precizitāti: ");
    fflush(stdin);
    scanf("%f", &precizitate);

    float funkca, funkcb;
    int k=0;

    funkca = sin(a/2)-c; funkcb = sin(b/2)-c;
    if(funkca*funkcb>0)
    {
        printf("Intervālā [%.2f;%.2f] sin(x/2) funkcijai ", a,b);
        printf("nav c = %f vērtība(vai tajā ir pāra c vērtību skaits)\n", c);
        return 1;
    }

    while((b-a)>precizitate)
    {
        k++;
        x=(a+b)/2.;
        if(funkca*(sin(x/2)-c)>0)
        a=x;
        else
        b=x;
    }

    printf("\nApgabalā [%.2f;%.2f] vērtība c = %.2f atrodas pie x=%.2f, jo sin(%.2f/2) = %.2f\n", a1,b1,c,x,x,sin(x/2));
    printf("Nepieciešamais iterāciju skaits, lai aprēķinātu šo vērtību ar ievadīto precizitāti, bija: %d\n", k);

    return 0;
}

![sin(x:2)_grafiks2](https://user-images.githubusercontent.com/90239563/146250214-80b231b8-4186-4dd2-b86c-a2ee54689c2d.png)
Attēls: https://user-images.githubusercontent.com/90239563/146250214-80b231b8-4186-4dd2-b86c-a2ee54689c2d.png
md faila skats iekšpusē:
