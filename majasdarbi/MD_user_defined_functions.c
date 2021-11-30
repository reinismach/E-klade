#include <stdio.h>
void laipni_luudzam();
char kafijas_izmeers(char skaitlis);
void kafijas_izveele(char string, char kaf_izmeers);
char cukuru();

int main()
{
    laipni_luudzam();
    char stundas, izmeers;
    printf("Atļaujiet prasīt - cik stundas Jūs šodien esiet gulējis/usi?: ");
    scanf("%hhd", &stundas);
    izmeers = kafijas_izmeers(stundas);

    if(izmeers == 0)
    printf("Jūs ievadījāt nekorektu vērtību, lūdzu, mēģiniet vēlreiz!\n");
    else
    {
    char kafija[7];
    printf("Kādu kafiju Jūs vēlētos(baltu vai melnu)?: ");
    scanf("%s", kafija);
    kafijas_izveele(kafija[0], izmeers);
    }
    return 0;
}

void laipni_luudzam()
{
    printf("Laipni lūdzam online kafejnīcā!\n");
}
char kafijas_izmeers(char skaitlis)
{
    char kaf_izmeers;
    if(skaitlis < 0 | skaitlis > 24) 
    {
        kaf_izmeers = 0; 
        printf("Atvainojiet, bet tas nav iespējams.\n");
    }
    else if(skaitlis <= 4) kaf_izmeers = 'L';
    else if(skaitlis < 8) kaf_izmeers = 'M';
    else if(skaitlis >= 8) kaf_izmeers = 'S';
    return kaf_izmeers;
}

void kafijas_izveele(char string, char kaf_izmeers)
{
    char cukurs;
    if(string == 'b')
    {
        cukurs = cukuru();
        if(cukurs == 0)
        printf("Lūdzu, Jūsu kafija izmērā %c, balta, bez cukura.\n", kaf_izmeers);
        else if(cukurs == 1)
        printf("Lūdzu, Jūsu kafija izmērā %c, balta, ar cukuru.\n", kaf_izmeers);
    }
    else if(string == 'm')
    {
        cukurs = cukuru();
        if(cukurs == 0)
        printf("Lūdzu, Jūsu kafija izmērā %c, melna, bez cukura.\n", kaf_izmeers);
        else if(cukurs == 1)
        printf("Lūdzu, Jūsu kafija izmērā %c, melna, ar cukuru.\n", kaf_izmeers);
    }
}

char cukuru()
{
    char cukurs1;
    printf("Cukuriņu?(nē - 0, jā - 1): ");
    scanf("%hhd", &cukurs1);
    return cukurs1;
}
