#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double af(double x) {return sin(x/2);}

double af1(double x) {return (cos(x/2))/2;}

double af2(double x) {return (-sin(x/2))/4;}

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

    arg = (double*) malloc((el+1)*sizeof(double));
    if(arg == NULL) exit (1);

    f = (double*) malloc((el+1)*sizeof(double));
    if(f == NULL) exit (1);

    df1 = (double*) malloc((el)*sizeof(double));
    if(df1 == NULL) exit (1);

    df2 = (double*) malloc((el-1)*sizeof(double));
    if(df2 == NULL) exit (1);

    for(n=0 ; n<=el ; n++)
    {
        arg[n] = a + n*delta_x;
        f[n] = af(arg[n]);
    }

    for(n=0 ; n<=el-1 ; n++)
    {
        df1[n] = (f[n+1]-f[n])/delta_x;
    }

    for(n=0 ; n<=el-2 ; n++)
    {
        df2[n] = (df1[n+1]-df1[n])/delta_x;
    }

    printf("|%13s||%13s||%13s|%13s|%13s|%13s|\n", "x", "f", "f\'", "f\'", "f\'\'", "f\'\'");
    printf("|%13s||%13s||%13s|%13s|%13s|%13s|\n", " ", " ", " analītiskais", "diferencēšana", " analītiskais", "diferencēšana");
    for(n=0; n<=el-2 ; n++)
    {
        printf("|%13.3lf||%13.3lf||%13.3lf|%13.3lf|%13.3lf|%13.3lf|\n", arg[n], f[n], af1(arg[n]), df1[n], af2(arg[n]), df2[n]);
    }
    printf("|%13.3lf||%13.3lf||%13.3lf|%13.3lf|%13.3lf|%13s|\n", arg[n], f[n], af1(arg[n]), df1[n], af2(arg[n]), "nav");
    n++;
    printf("|%13.3lf||%13.3lf||%13.3lf|%13s|%13.3lf|%13s|\n", arg[n], f[n], af1(arg[n]), "nav", af2(arg[n]), "nav");

    FILE *pfile;

    pfile = fopen("derivative.dat", "w");

    if(pfile==NULL) exit (1);
    else
    {
        fprintf(pfile, "|%13s||%13s||%13s|%13s|%13s|%13s|\n", "x", "f", "f\'", "f\'", "f\'\'", "f\'\'");
        fprintf(pfile, "|%13s||%13s||%13s|%13s|%13s|%13s|\n", " ", " ", " analītiskais", "diferencēšana", " analītiskais", "diferencēšana");
        for(n=0 ; n<=el-2 ; n++)
        {
            fprintf(pfile, "|%13.3lf||%13.3lf||%13.3lf|%13.3lf|%13.3lf|%13.3lf|\n", arg[n], f[n], af1(arg[n]), df1[n], af2(arg[n]), df2[n]);
        }
        fprintf(pfile, "|%13.3lf||%13.3lf||%13.3lf|%13.3lf|%13.3lf|%13s|\n", arg[n], f[n], af1(arg[n]), df1[n], af2(arg[n]), "nav");
        n++;
        fprintf(pfile, "|%13.3lf||%13.3lf||%13.3lf|%13s|%13.3lf|%13s|\n", arg[n], f[n], af1(arg[n]), "nav", af2(arg[n]), "nav");
    }

    fclose(pfile);

    free (arg);
    free (f);
    free (df1);
    free(df2);

    return 0;
}

grafiks:
![sin(x:2)_grafiks3](https://user-images.githubusercontent.com/90239563/148912861-5de76c43-fb96-42f0-9d1a-c8545a4c80ac.png)

attēls: https://user-images.githubusercontent.com/90239563/148912861-5de76c43-fb96-42f0-9d1a-c8545a4c80ac.png

raw: https://raw.githubusercontent.com/reinismach/RTR105/main/darbi/3ld_derivative/README.md
