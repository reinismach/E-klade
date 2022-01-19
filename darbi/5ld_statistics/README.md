
Kods:
```
#include <stdio.h>
#include <string.h>
#define N 20

void kartosana(char tx[])
{
    int i, j;
    char temp;
    for(i=0 ; i<strlen(tx)-1 ; i++)
    for(j=i+1 ; j<strlen(tx) ; j++)
    if(tx[i] > tx[j])
    {
        temp = tx[i];
        tx[i] = tx[j];
        tx[j] = temp;
    }
    printf("Rinda sakārtota alfabēta secībā(pēc ASCII skaitļiem):\t\t ");
    for(i=0 ; i<strlen(tx)-1 ; i++)
    printf("%c, ",tx[i]);
    printf("%c\n", tx[strlen(tx)-1]);

    printf("Atbilstošie ASCII skaitļi sakārtoti rindā:\t\t\t ");
    for(i=0 ; i<strlen(tx)-1 ; i++)
    printf("%hhd, ",tx[i]);
    printf("%hhd\n", tx[strlen(tx)-1]);
}
int main()
{
    char txt[N];
    
    printf("Lūdzu, ievadiet teksta rindu: ");
    scanf("%s", txt);

    int i, j, sum, sum2=0, vid, med, el=0, g=strlen(txt);

    kartosana(txt);

    for(i=0 ; i<g ; i++)//videja
    sum += txt[i];
    vid = sum/g;

    printf("\nMazākā vērtība jūsu simbolu rindā(pēc ASCII):\t\t\tsimbols - %c\tskaitlis - %d\n", txt[0], txt[0]);
    printf("Lielākā vērtība jūsu simbolu rindā(pēc ASCII):\t\t\tsimbols - %c\tskaitlis - %d\n", txt[g-1], txt[g-1]);
    printf("Aritmētiksi vidējā vērtība jūsu simbolu rindā(pēc ASCII):\tsimbols - %c\tskaitlis - %d\n", vid, vid);
    
    if(g%2 == 1)//mediana
    {
        med = g/2;
        printf("Mediānas vērtība jūsu simbolu rindai(pēc ASCII):\t\tsimbols - %c\tskaitlis - %d\n", txt[med], txt[med]);
    }
    if(g%2 == 0)
    {
        med = (txt[g/2-1] + txt[g/2])/2;
        printf("Mediānas vērtība jūsu simbolu rindai(pēc ASCII):\t\tsimbols - %c\tskatlis - %d\n", med, med);
    }

    sum=1;//moda
    int moda[g];

    for(i=0 ; i<g ; i++)
    {
        for(j=i+1 ; j<=g ; j++)
        if(txt[i]==txt[j]) sum += 1;
        moda[i] = sum;
        sum=1;
    }

    int temp;
    char temp2;

    for(i=0 ; i<g-1 ; i++)
    for(j=i+1 ; j<g ; j++)
    if(moda[i] > moda[j])
    {
        temp = moda[i];
        moda[i] = moda[j];
        moda[j] = temp;
        temp2 = txt[i];
        txt[i] = txt[j];
        txt[j] = temp2;
    }

    printf("Modas vērtība jūsu simbolu rindā(pēc ASCII):\t\t\tsimbols - %c\tskaitlis - %d\n", txt[g-1], txt[g-1]);

    for(i=2 ; i<=g ; i++)
    if(moda[g-1]==moda[g-i])
    {
        printf("Vēl viena modas vērtība jūsu simbolu rindā(pēc ASCII):\t\tsimbols - %c\tskaitlis - %d\n", txt[g-i], txt[g-i]);
    }
    printf("Modas vērtība rindā atkārtojas %d reizes\n", moda[g-1]);

    return 0;
}
```
Rezultāts:

<img width="779" alt="LD5_rezultats" src="https://user-images.githubusercontent.com/90239563/150124205-901aa725-79bb-465c-bfce-3b2be8cc5647.png">
https://user-images.githubusercontent.com/90239563/150124205-901aa725-79bb-465c-bfce-3b2be8cc5647.png

Grafiks:

![LD5_grafiks](https://user-images.githubusercontent.com/90239563/150124285-e3b17896-c208-444d-8e3c-6dc2962f70c0.png)
https://user-images.githubusercontent.com/90239563/150124285-e3b17896-c208-444d-8e3c-6dc2962f70c0.png

Gnuplot data:
```
#    burti	   biežums
        a			3
        b			1
    	k			2
        l			1
        o			1
        u			1
```

Gnuplot script:
```
# Scale font and line width (dpi) by changing the size! It will always display stretched.
set terminal svg size 600,400 enhanced fname 'arial'  fsize 10 butt solid
set output 'out.svg'

# Key means label...
set key inside bottom right
set xlabel 'rindas vērtības'
set ylabel 'vērtību biežums'
set title 'rindas histogramma'
set style data histogram
box_wd = 2
set boxwidth box_wd
set style fill solid
unset key
plot [-1:6] [0:4] 'data.txt' using 2:xtic(1)
```

md faila skats iekšpusē: https://raw.githubusercontent.com/reinismach/RTR105/main/darbi/5ld_statistics/README.md
