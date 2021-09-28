Datormācība(pamatkurss)

Komandu darbības:



Šīs vēl jāpievieno: https://www.hostinger.com/tutorials/linux-commands



echo $0 - parāda ar kādu shellu pašlaik tiek strādāts.

whoami - parāda lietotāja nosaukumu.

whereis - parāda izvēlētās direktorijas vai faila atrašanās vietu.

pwd - parāda kādā failā vai direktorijā(mapē) pašlaik atrodies.

ls - parāda direktorijas saturu.

ls -l - parāda direktorijas saturu un ar to saistītos datus.

ls -t - parāda direktorijas saturu sākot ar jaunākajiem rediģētajiem datiem.

ls -a - parāda visu direktorijas saturu, ieskaitot slēptos failus un mapes.

ls -la - parāda visu direktorijas saturu, ieskaitot slēptos failus un mapes, kā arī ar saturu saistītos datus.

cd ~/..... - pārvietoto uz jaunu direktoriju. Piemēram: cd ~/documents ; cd ~/documents/VirtualDJ

cd . - nekur nepārvieto, tu paliec tajā pašā direktorijā, kurā atradies pirms tam.

cd .. - pārvieto uz augstāku direktoriju. Piemēram: ja pwd ir Users/user/documents, tad no documents uz user.

cd ~ vai cd - pārvieto uz māju jeb sākuma direktoriju.

history - parāda darbību vēsturi.

bash - pārmaina shellu uz bash.

man - manuāls, kas parāda info par komandu. Piemērs: man ls (tiks parādīta informācija par komandu ls).

uname -a - parāda informāciju par operētājistēmu un datoru.

touch - nomaina veikto izmaiņu un pieejas laiku izvēlētajā failā. Ja izvēlētais fails neeksistē, tad tiek iveidots jauns fails!!
  
find - parāda visus failus izvēlētajā vietā pēc to kārtības secības. 

cp - nokopē izvēlēto failu un ievieto nokopēto failu jaunā vietā. Piemērs cp /root/readme.txt /tmp/readme_copy.txt

ls -lt tmp - parāda sarakstu tieši vajadzīgajā direktorijā(šajā gadījumā - tmp), neizejot no pašreizējās direktorijas.

mv - pārvieto izvēlēto failu uz izvēlēto vietu. Ja jaunajā vietā fails tiek nosaukts citādi, tad tā nosaukums mainās. 
Piemērs mv ../tmp/readme_copy.txt ./readme_copy_moved.txt

rm - izdzēš izvēlēto failu.

rmdir - izdzēš izvēlēto direktoriju.

* - aizvieto simbolus. Piemērs: rm te*t*.txt izdzēsīs failus, kuru nosaukums ir te(jebkādi simboli)t(jebkādi simboli).txt - piem. teslato.txt

mkdir - izveido jaunu direktoriju

echo Hello World! - parāda tavu ievadīto tekstu(šajā gadījumā "Hello World!").

echo "cau\ncau cau zajka" - teksts pēc \n parādās jaunā rindiņā.

echo "Hello World!" > text.txt - ievieto ievadīto tekstu izvēlētajā failā. Ja darbību vēlreiz veic ar > jaunais teksts aizvietos veco.

echo "7890" >> text.txt - papildina tekstu izvēlētajā failā(vecais teksts netiek aizvietots).

cat - atver izvēlēto failu.

hexdump - parāda izvēlēto failu izvēlētajā formātā. Piemērs: hexdump -C text.txt

nano - atver text editor. Piemēram: nano text.txt

chmod - dod iespēju modificēt failu. Piemērs: chmod 444 test.txt
 
echo $PATH - parāda ceļu, caur kuru sistēma meklē ievadītās komandas.

ctrl + l - notīra ekrānu

echo $? - parāda ar ko beidzās iepriekšējā komanda(kāda kļūda vai pareiza izpilde).

ctrl + k - iekš nano text editor nokopē rindiņu vai vairākas rindiņas.

ctrl + u - iekš nano text editor peisto rindiņu vai rindiņas, ja ir nokopētas vairākas rindiņas.
