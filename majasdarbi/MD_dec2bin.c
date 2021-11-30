#include <stdio.h>
int main()

{

char a = 2, skaitlis, num1, num2, num3, num4, num5, num6, num7, num8;

printf("Lietotāj, lūdzu, ievadiet vienu decimālu skaitli: ");
fflush(stdout);
scanf("%hhd", &skaitlis);

num1 = skaitlis % a;
skaitlis = skaitlis >> 1;

num2 = skaitlis % a;
skaitlis = skaitlis >> 1;

num3 = skaitlis % a;
skaitlis = skaitlis >> 1;

num4 = skaitlis % a;
skaitlis = skaitlis >> 1;

num5 = skaitlis % a;
skaitlis = skaitlis >> 1;

num6 = skaitlis % a;
skaitlis = skaitlis >> 1;

num7= skaitlis % a;
skaitlis = skaitlis >> 1;

num8= skaitlis % a;
skaitlis = skaitlis >> 1;

printf("Jūsu ievadītais skaitlis attēlots binārajā kodā = %d%d%d%d%d%d%d%d\n",num8, num7, num6, num5, num4, num3, num2, num1);

return 0;

}
