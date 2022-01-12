Šī programma izrēķina, attēlo un ieraksta failā argumenta un funkcijas vērtības, kā arī 1. un 2. funkcijas atvasinājuma vērtības, izmantojot gan atvasinājuma analītisko formulu, gan diferencēšanu. Šīs vērtības tiek rēķinātas izvēlētajā funkcijas apgabalā un ar izvēlētu argumenta soļa vērtību.

Kods:
```
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

    printf("Lūdzu, ievadiet precizitātes vērtību(argumenta soli): ");
    fflush(stdout);
    scanf("%lf", &delta_x);

    el = (b-a)/delta_x;

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
```
Rezultāts:

<img width="789" alt="LD3_rezultats" src="https://user-images.githubusercontent.com/90239563/149149482-6e5bbb20-fd83-4374-959f-d6ef977e2a08.png">
https://user-images.githubusercontent.com/90239563/149149482-6e5bbb20-fd83-4374-959f-d6ef977e2a08.png

Grafiks:

![LD3_grafiks](https://user-images.githubusercontent.com/90239563/149149399-ba8f0eef-cb3e-4d4f-948d-4a25acccf793.png)
https://user-images.githubusercontent.com/90239563/149149399-ba8f0eef-cb3e-4d4f-948d-4a25acccf793.png

Gnuplot script:
```
#             x              f             f'            f'           f''           f'' 
#                                analītiskais diferencēšana  analītiskais diferencēšana 
         1.000          0.479          0.439         0.433        -0.120        -0.131 
         1.100          0.523          0.426         0.420        -0.131        -0.141 
         1.200          0.565          0.413         0.405        -0.141        -0.151 
         1.300          0.605          0.398         0.390        -0.151        -0.161 
         1.400          0.644          0.382         0.374        -0.161        -0.170 
         1.500          0.682          0.366         0.357        -0.170        -0.179 
         1.600          0.717          0.348         0.339        -0.179        -0.188 
         1.700          0.751          0.330         0.320        -0.188        -0.196 
         1.800          0.783          0.311         0.301        -0.196        -0.203 
         1.900          0.813          0.291         0.281        -0.203        -0.210 
         2.000          0.841          0.270         0.260        -0.210        -0.217 
         2.100          0.867          0.249         0.238        -0.217        -0.223 
         2.200          0.891          0.227         0.216        -0.223        -0.228 
         2.300          0.913          0.204         0.193        -0.228        -0.233 
         2.400          0.932          0.181         0.169        -0.233        -0.237 
         2.500          0.949          0.158         0.146        -0.237        -0.241 
         2.600          0.964          0.134         0.122        -0.241        -0.244 
         2.700          0.976          0.110         0.097        -0.244        -0.246 
         2.800          0.985          0.085         0.073        -0.246        -0.248 
         2.900          0.993          0.060         0.048        -0.248           nav 
         3.000          0.997          0.035           nav        -0.249           nav 
```

md faila skats iekšpusē: https://raw.githubusercontent.com/reinismach/RTR105/main/darbi/3ld_derivative/README.md
