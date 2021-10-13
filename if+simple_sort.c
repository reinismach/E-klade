#include <stdio.h>
int main()
{
int a,b,c,d;

printf("Lietotāj, ievadiet trīs atšķirīgus decimālus skaitļus: ");
fflush(stdout);
scanf("%d%d%d", &a,&b,&c);

printf("Izvēlieties skaitļu kārtošanas secību\n");
printf("Ievadiet 0, lai attēlotu skaitļus augošā secībā, vai 1, lai attēlotu tos dilstošā secībā: ");
fflush(stdout);
scanf("%d", &d);

if(d==0)
 
{
 if(a>b && a>c && b<a && b>c)
 printf("Ievadītie skaitļi augošā secībā:\n %d\n %d\n %d\n", c,b,a);
 
 else if(a>c && a>b && c<a && c>b)
 printf("Ievadītie skaitļi augošā secībā:\n %d\n %d\n %d\n", b,c,a);

 else if(b>a && b>c && a<b && a>c)
 printf("Ievadītie skaitļi augošā secībā:\n %d\n %d\n %d\n", c,a,b);

 else if(b>a && b>c && c<b && c>a)
 printf("Ievadītie skaitļi augošā secībā:\n %d\n %d\n %d\n", a,c,b);

 else if(c>a && c>b && a<c && a>b)
 printf("Ievadītie skaitļi augošā secībā:\n %d\n %d\n %d\n", b,a,c);

 else if(c>a && c>b && b<c && b>a)
 printf("Ievadītie skaitļi augošā secībā:\n %d\n %d\n %d\n", a,b,c);
 
 else
 printf("Jūs ievadījāt divus vai trīs vienādus skaitļus\n");
}

else if(d==1)

{
 if(a>b && a>c && b<a && b>c)
 printf("Ievadītie skaitļi dilstošā secībā:\n %d\n %d\n %d\n", a,b,c);
 
 else if(a>c && a>b && c<a && c>b)
 printf("Ievadītie skaitļi dilstošā secībā:\n %d\n %d\n %d\n", a,c,b);

 else if(b>a && b>c && a<b && a>c)
 printf("Ievadītie skaitļi dilstošā secībā:\n %d\n %d\n %d\n", b,a,c);

 else if(b>a && b>c && c<b && c>a)
 printf("Ievadītie skaitļi dilstošā secībā:\n %d\n %d\n %d\n", b,c,a);

 else if(c>a && c>b && a<c && a>b)
 printf("Ievadītie skaitļi dilstošā secībā:\n %d\n %d\n %d\n", c,a,b);

 else if(c>a && c>b && b<c && b>a)
 printf("Ievadītie skaitļi dilstošā secībā:\n %d\n %d\n %d\n", c,b,a);

 else
 printf("Jūs ievadījāt divus vai trīs vienādus skaitļus\n");
}

else
printf("Secības izvēlē jūs ievadījāt nekorektu vērtību\n");

 
return 0;}
