#include <stdio.h>

#include <math.h>

#include <stdlib.h>

double af(double x)
{
    
    return sin(x/2);
}
double af1(double x)
{
    
    return (cos(x/2))/2;
}
double af2(double x)
{
    
    return (-sin(x/2))/4;
}

int main()
{
    
    double a, b, delta_x;
    
    int el;

    printf("Lūdzu, ievadiet minimuma robežas vērtību: ");
    fflush(stdout);
    scanf("%lf", &a);

    printf("Lūdzu, ievadiet maksimuma robežas vērtību: ");
    fflush(stdout);
    scanf("%lf", &b);

    printf("Lūdzu, ievadiet precizitātes vērtību: ");
    fflush(stdout);
    scanf("%lf", &delta_x);

    el = (b-a)/delta_x;

    printf("el vērtība = %d\n", el);

    double *arg, *f, *df1, *df2;
    int n;

    arg = (double*) malloc(el+1);
    if(arg == NULL) exit (1);

    f = (double*) malloc(el+1);
    if(f == NULL) exit (1);

    df1 = (double*) malloc(el);
    if(df1 == NULL) exit (1);

    df2 = (double*) malloc(el-1);
    if(df2 == NULL) exit (1);

    for(n=0 ; n<el ; n++)
    {
        arg[n] = a + n*delta_x;
        f[n] = af(arg[n]);
    }
    arg[n] = '\0';
    f[n] = '\0';

    for(n=0 ; n<el-1 ; n++)
    {
        df1[n] = (af(arg[n+1])-af(arg[n]))/delta_x;
    }
    df1[n] = '\0';

    for(n=0 ; n<el-2 ; n++)
    {
        df2[n] = (df1[n+1]-df1[n])/delta_x;
    }
    df2[n] = '\0';

    printf("|%13s||%13s||%13s|%13s|%13s|%13s|\n", "x", "f", "f\'", "f\'", "f\'\'", "f\'\'");
    printf("|%13s||%13s||%13s|%13s|%13s|%13s|\n", " ", " ", " analītiskais", "diferencēšana", " analītiskais", "diferencēšana");
    for(n=0; n<el-2 ; n++)
    {
        printf("|%13.3lf||%13.3lf||%13.3lf|%13.3lf|%13.3lf|%13.3lf|\n", arg[n], f[n], af1(arg[n]), df1[n], af2(arg[n]), df2[n]);
    }
    printf("|%13.3lf||%13.3lf||%13.3lf|%13.3lf|%13.3lf|%13s|\n", arg[n], f[n], af1(arg[n]), df1[n], af2(arg[n]), "nav");
    n++;
    printf("|%13.3lf||%13.3lf||%13.3lf|%13s|%13.3lf|%13s|\n", arg[n], f[n], af1(arg[n]), "nav", af2(arg[n]), "nav");

    free (arg);
    free (f);
    free (df1);
    free(df2);

    return 0;
}

raw: https://raw.githubusercontent.com/reinismach/RTR105/main/darbi/3ld_derivative/README.md
