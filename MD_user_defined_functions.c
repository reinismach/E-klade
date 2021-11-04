#include <stdio.h>
void laipni_lūdzam();
char kafijas_izmērs(char skaitlis);
void kafijas_izvēle(char string, char kaf_izmērs);
char cukuru();

int main()
{
    laipni_lūdzam();
    char stundas, izmērs;
    printf("Atļaujiet prasīt - cik stundas Jūs šodien esiet gulējis/usi?: ");
    scanf("%hhd", &stundas);
    izmērs = kafijas_izmērs(stundas);

    if(izmērs == 0)
    printf("Jūs ievadījāt nekorektu vērtību, lūdzu, mēģiniet vēlreiz!\n");
    else
    {
    char kafija[7];
    printf("Kādu kafiju Jūs vēlētos(baltu vai melnu)?: ");
    scanf("%s", kafija);
    kafijas_izvēle(kafija[0], izmērs);
    }
    return 0;
}

void laipni_lūdzam()
{
    printf("Laipni lūdzam online kafejnīcā!\n");
}
char kafijas_izmērs(char skaitlis)
{
    char kaf_izmērs;
    if(skaitlis < 0 | skaitlis > 24) 
    {
        kaf_izmērs = 0; 
        printf("Atvainojiet, bet tas nav iespējams.\n");
    }
    else if(skaitlis <= 4) kaf_izmērs = 'L';
    else if(skaitlis < 8) kaf_izmērs = 'M';
    else if(skaitlis >= 8) kaf_izmērs = 'S';
    return kaf_izmērs;
}

void kafijas_izvēle(char string, char kaf_izmērs)
{
    char cukurs;
    if(string == 'b')
    {
        cukurs = cukuru();
        if(cukurs == 0)
        printf("Lūdzu, Jūsu kafija izmērā %c, balta, bez cukura.\n", kaf_izmērs);
        else if(cukurs == 1)
        printf("Lūdzu, Jūsu kafija izmērā %c, balta, ar cukuru.\n", kaf_izmērs);
    }
    else if(string == 'm')
    {
        cukurs = cukuru();
        if(cukurs == 0)
        printf("Lūdzu, Jūsu kafija izmērā %c, melna, bez cukura.\n", kaf_izmērs);
        else if(cukurs == 1)
        printf("Lūdzu, Jūsu kafija izmērā %c, melna, ar cukuru.\n", kaf_izmērs);
    }
}

char cukuru()
{
    char cukurs1;
    printf("Cukuriņu?(nē - 0, jā - 1): ");
    scanf("%hhd", &cukurs1);
    return cukurs1;
}
