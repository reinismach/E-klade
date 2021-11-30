#include <stdio.h>
int main()
{
char a,b,c;
int d;

printf("Lietotāj, ievadiet trīs atšķirīgus burtus: ");
fflush(stdout);
scanf(" %c %c %c", &a,&b,&c);

printf("Izvēlieties burtu kārtošanas secību\n");
printf("Ievadiet 0, lai attēlotu burtus alfabēta secībā, vai 1, lai attēlotu tos pretēji alfabēta secībai: ");
fflush(stdout);
scanf(" %d", &d);

if(d==0)
 
{
 if(a>b && a>c && b<a && b>c)
 printf("Ievadītie burti alfabēta secībā:\n %c\n %c\n %c\n", c,b,a);
 
 else if(a>c && a>b && c<a && c>b)
 printf("Ievadītie burti alfabēta secībā:\n %c\n %c\n %c\n", b,c,a);

 else if(b>a && b>c && a<b && a>c)
 printf("Ievadītie burti alfabēta secībā:\n %c\n %c\n %c\n", c,a,b);

 else if(b>a && b>c && c<b && c>a)
 printf("Ievadītie burti alfabēta secībā:\n %c\n %c\n %c\n", a,c,b);

 else if(c>a && c>b && a<c && a>b)
 printf("Ievadītie burti alfabēta secībā:\n %c\n %c\n %c\n", b,a,c);

 else if(c>a && c>b && b<c && b>a)
 printf("Ievadītie burti alfabēta secībā:\n %c\n %c\n %c\n", a,b,c);
 
 else
 printf("Jūs ievadījāt divus vai trīs vienādus burtus\n");
}

else if(d==1)

{
 if(a>b && a>c && b<a && b>c)
 printf("Ievadītie burti pretēji alfabēta secībai:\n %c\n %c\n %c\n", a,b,c);
 
 else if(a>c && a>b && c<a && c>b)
 printf("Ievadītie burti pretēji alfabēta secībai:\n %c\n %c\n %c\n", a,c,b);

 else if(b>a && b>c && a<b && a>c)
 printf("Ievadītie burti pretēji alfabēta secībai:\n %c\n %c\n %c\n", b,a,c);

 else if(b>a && b>c && c<b && c>a)
 printf("Ievadītie burti pretēji alfabēta secībai:\n %c\n %c\n %c\n", b,c,a);

 else if(c>a && c>b && a<c && a>b)
 printf("Ievadītie burti pretēji alfabēta secībai:\n %c\n %c\n %c\n", c,a,b);

 else if(c>a && c>b && b<c && b>a)
 printf("Ievadītie burti pretēji alfabēta secībai:\n %c\n %c\n %c\n", c,b,a);

 else
 printf("Jūs ievadījāt divus vai trīs vienādus burtus\n");
}

else
printf("Secības izvēlē jūs ievadījāt nekorektu vērtību\n");

 
return 0;}
