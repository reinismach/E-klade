#include <stdio.h>

int main() {

int a;

printf("Lūdzu izvēlieties vienu datu tipu (char - 1, int - 2 vai long long - 3): ");
fflush(stdout);
scanf("%d", &a);

if(a==1)
{

char k=0, N, fact=1, fact_old;

printf("Izvēlieties decimālu skaitli, kam aprēķināt faktoriālu: ");
fflush(stdout);
scanf("%hhd", &N);

 while(k<N) 
 {
 k++;
 fact_old = fact;
 fact *= k;

 if((fact/k) != fact_old) 
  {
  printf("Jūsu ievadīto skaitli nav iespējams attēlot ar izvēlēto datu tipu\n");
  break;
  }

 }
if((fact/k) == fact_old)
printf("skaitļa %hhd faktoriāls - %hhd\n", N, fact);

}

if(a==2)
{

int k=0, N, fact=1, fact_old;

printf("Izvēlieties decimālu skaitli, kam aprēķināt faktoriālu: ");
fflush(stdout);
scanf("%d", &N);

 while(k<N) 
 {
 k++;
 fact_old = fact;
 fact *= k;

 if((fact/k) != fact_old) 
  {
  printf("Jūsu ievadīto skaitli nav iespējams attēlot ar izvēlēto datu tipu\n");
  break;
  }

 }
if((fact/k) == fact_old)
printf("skaitļa %d faktoriāls - %d\n", N, fact);

}
 
if(a==3)
{

long long k=0, N, fact=1, fact_old;

printf("Izvēlieties decimālu skaitli, kam aprēķināt faktoriālu: ");
fflush(stdout);
scanf("%lld", &N);

 while(k<N) 
 {
 k++;
 fact_old = fact;
 fact *= k;

 if((fact/k) != fact_old) 
  {
  printf("Jūsu ievadīto skaitli nav iespējams attēlot ar izvēlēto datu tipu\n");
  break;
  }

 }
if((fact/k) == fact_old)
printf("skaitļa %lld faktoriāls - %lld\n", N, fact);

}

return 0;
}
