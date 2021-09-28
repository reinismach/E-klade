C programmas kompilēšanas soļi:  https://csgeekshub.com/c-programming/c-program-compilation-steps-example-with-gcc-linux/

nano tests.c - atver text editor, kurā var uzrakstīt C kodu. Piemērs pavisam vienkāršam C valodas kodam: 

    #include <stdio.h>

    int
    main (void)
    {
    printf ("Hello, world!\n");
    return 0;
    }

gcc - nokompilē c valodas programmu. 
 Komanda "-save-temps" parādīs izveidotus visu soļu failus. 
 Komanda "-Wall" parādīs warnings, ja tādi būs. 
 Komanda "tests.c -o tests.out" izdara pēdējo kompilēšanas soli - linking process.  
  Piemērs: gcc -Wall -save-temps first_code.c -o first.out

first_code.c - C koda fails
first_code.i - pre-processed fails.
first_code.s - assembly fails.
first_code.o - object fails.
first_code.out - programma.

./first_code.out - izpilda kodu

Komentāri C kodā(tie neparādās programmā, tie domāti programmētājam):

// Komentāra viena rinda
// 1. versija sekojošajam uzdevumam
/*
Komentāra bloks
no vairākām rindiņām
*/
int main()
{
return 0;
}


Bibliotēkas - <stdio.h> - un komandu - printf, char, c1, c2 - izmantošana:

    // datu tipi - Wikipedia vai C tehniskā specifikācija
    #include<stdio.h>
    int main()
    {
    char c1; // char datu tipa mainīgā deklarēšana
             // turpmāk kodā var tikt izmantots identifikators "c1"
             // griežotiees pie "c1", mēs griezīsimies pie noteiktā 1 baita
             // liela atmiņas apgabala
             // pēc deklarēšanas atmiņas apgabala aizpildījums nav zināms
             // 0101 1110 vai 0111 0000 vai 0000 1010

    printf("Statisks teksts - mainīgā c1 vērtība pēc deklarēšanas - %d\n",c1);

    char c2 = 100; // char datu tipa mainīgā definēšana
    printf("Statisks teksts - mainīgā c2 vērtība pēc definēšanas - %d\n",c2);
    // mainīgā identifikatora piemērs - var_count, Var_Count, _var_count
    // mainīgo nosaukumos nedrīkst izmantot atstarpes, domuzīmes utt.

    c2 = 65;
    // atbilstoši charb b|bbb bbbb
    // 65 = 64 + 1 = 1*2^6 + 1*2^0 => 0|100 0001 (bin) => 41 (hex) => 101 (oct)
    printf("Mainīgā c2 vērtība pēc jaunas vērtības piešķiršanas - %d (dec)\n",c2);
    printf("Mainīgā c2 vērtība pēc jaunas vērtības piešķiršanas - 0x%x\n",c2);
    printf("Mainīgā c2 vērtība pēc jaunas vērtības piešķiršanas - %o (oct)\n",c2);
    printf("Mainīgā c2 vērtība pēc jaunas vērtības piešķiršanas - %c (simbols)\n",c2);

    c2 = 0x42;
    printf("\nMainīgā c2 vērtība pēc jaunas vērtības piešķiršanas:\n");
    printf("kā dec - %d, kā hex - %x, kā oct - %o, kā simbols - %c\n",c2,c2,c2,c2);

    c2 = 'K';
    printf("\nMainīgā c2 vērtība pēc jaunas vērtības piešķiršanas:\n");
    printf("kā dec - %d, kā hex - %x, kā oct - %o, kā simbols - %c\n",c2,c2,c2,c2);

    c2 = 1000;
    printf("\nMainīgā c2 vērtība pēc jaunas vērtības piešķiršanas:\n");
    printf("kā dec - %d, kā hex - %x, kā oct - %o, kā simbols - %c\n",c2,c2,c2,c2);

    // 1000 = 512 + 256 + 128 + 64 + 32 + 8 =
    //     1*2^9 + 1*2^8 + 1*2^7 + 1*2^6 + 1*2^5 + 1*2^5 + 1*2^3
    // =>           0000 0011 1110 1000
    // =>                    1|110 1000
    // =>                    -|001 0111
    // atbilstoši char b|bbb+         1
    // 65 = 64 + 1 = 1*2^6 + 1-|001 1000 => -(1*2^3 + 1*2^4) = -(24) = -24

    return 0;
    }

https://csgeekshub.com/c-programming/c-program-compilation-steps-example-with-gcc-linux/

skaitīšanas sistēma http://www.ecowin.org/ascii.htm

https://cplusplus.com/
