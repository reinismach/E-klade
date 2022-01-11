Šī programma atrod x vērtību izvēlētajai funkcijas vērtībai iepriekš izvēlētajā apgabalā. Šajā metodē tiek realizēta saknes meklēšana, izmantojot vērtību zīmes jeb plusus, mīnusus.

Kods:
```
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
```
Rezultāts:

<img width="789" alt="LD2_rezultats" src="https://user-images.githubusercontent.com/90239563/148993797-4838af94-e53c-42ff-971e-551d4873536a.png">

Grafiks:

![LD2_grafiks](https://user-images.githubusercontent.com/90239563/148994804-48eafb78-70de-4dc4-9b00-1a9d7bf653a5.png)

Gnuplot script:
```
# Scale font and line width (dpi) by changing the size! It will always display stretched.
set terminal svg size 600,400 enhanced fname 'arial'  fsize 10 butt solid
set output 'out.svg'

# Key means label...
set key inside bottom right
set xlabel 'x'
set ylabel 'y'
set title 'sin(x/2) saknes meklēšana'
set grid
plot [-5:5] [-1.1:1.1] sin(x/2), '-' w p ls 1
-0.62 -0.3
```

md faila skats iekšpusē: https://raw.githubusercontent.com/reinismach/RTR105/main/darbi/2ld_roots/README.md
