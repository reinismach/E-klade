Komandu darbības:

echo $0 - parāda ar kādu shellu pašlaik tiek strādāts.

whoami - parāda lietotāja nosaukumu.

pwd - parāda kādā failā vai direktorijā(mapē) pašlaik atrodies.

ls - parāda direktorijas saturu.

ls -l - parāda direktorijas saturu un ar to saistītos datus.

ls -a - parāda visu direktorijas saturu, ieskaitot slēptos failus un mapes.

ls -la - parāda visu direktorijas saturu, ieskaitot slēptos failus un mapes, kā arī ar saturu saistītos datus.

cd ~/..... - pārvietoto uz jaunu direktoriju. Piemēram: cd ~/documents ; cd ~/documents/VirtualDJ

cd . - nekur nepārvieto, tu paliec tajā pašā direktorijā, kurā atradies pirms tam.

cd .. - pārvieto uz augstāku direktoriju. Piemēram: ja pwd ir Users/user/documents, tad no documents uz user.

cd ~ vai cd - pārvieto uz māju jeb sākuma direktoriju.

history - parāda darbību vēsturi.

bash - pārmaina shellu uz bash.

man - manuāls, kas parāda info par komandu. Piemērs: man ls (tiks parādīta informācija par komandu ls).


0 uname -a
   1 echo $0
   2 whoami
   3 pwd
   4 man ls
   5 man pwd
   6 pwd --help
   7 ls --help
   8 manls
   9 man ls
  10 ls --help
  11 uname --help
  12 ls -l
  13 ls -lt
  14 touch --help
  15 ls -lt
  16 touch test1.txt
  17 ls -lt
  18 touch -t 202109140000 start
  19 ls -lt
  20 touch -t 202109140001 readme.txt
  21 ls -lt
  22 touch -t 202109142359 stop
  23 ls -lt
  24 history
  25 history | grep touch 
  26 ls -lt
  27 tree
  28 find . -newer start
  29 find . -newer start \! -newer stop
  30 touch -t 202109150000 nexteday
  31 ls -lt
  32 find . -newer start
  33 find . -newer start \! -newer stop
  34 tree
  35 apt-get install tree
  36 uname
  37 uname -a
  38 install tree
  39 ls -lt
  40 cd ..
  41 pwd
  42 ls -lt
  43 cp /root/readme.txt /tmp/readme_copy.txt
  44 pwd
  45 ls -lt
  46 ls -lt /tmp/
  47 cd
  48 pwd
  49 ls -lt
  50 mv ../tmp/readme_copy.txt ./readme_copy_moved.txt
  51 ls -lt
  52 ls -lt /tmp/ 
  53 ls -lt
  54 mv readme.txt readme_original.txt
  55 ls -lt
  56 rm nexteday
  57 ls -lt
  58 touch text2.txt
  59 ls -lt
  60 rm te*t*.txt
  61 ls -lt
  62 hist
  63 history
  64 ls -lt
  65 touch test.txt
  66 ls -lt
  67 echo cvvlldnldlj;as;l
  68 echo cvvlldnldlnvfkhskfskhf
  69 echo Hello World!
  70 echo --hlep
  71 echo --help
  72 echo Hello World! Hello World!
  73 echo Hello World!\nHello World!
  74 echo -c Hello World!\nHello World!
  75 echo -e Hello World!\nHello World!
  76 echo -e "Hello World!\nHello World!"
  77 echo "Hello World!\nHello World!"
  78 echo -e "Hello World!\nHello World!" 
  79 echo "Hello World!"
  80 ls -lt
  81 echo "Hello World!" > text.txt
  82 ls -lt
  83 cat text.txt
  84 echo "12345" > text.txt
  85 ls -lt
  86 cat text.txt
  87 echo "123456" > text.txt
  88 ls -lt
  89 cat text.txt
  90 hexdump -C text.txt
  91 ls -lt
  92 cat text.txt
  93 echo "7890" >> text.txt
  94 ls -lt
  95 cat text.txt
  96 hexdump -C text.txt
  97 echo "7890" >> text_.txt
  98 ls -lt
  99 cat text_.txt
 100 nano text.txt
 101 ls -lt
 102 cat text_cits.txt
 103 cat text_cits_cits.txt
 104 nano
 105 lslt 
 106 ls -lt
 107 find . -newer start \! -newer stop
 108 ls -lt
 109 rm text*.*
 110 ls -lt
 111 rm *text*.*
 112 ls -lt
 113 nano test.txt
 114 ls -lt
 115 cat test.txt
 116 chmod 444 test.txt
 117 ls -lt test*.txt
 118 ls -lt *.txt
 119 ls -lt test.txt
 120 echo fvkjfksdlflsgkr >> test.txt
 121 ls -lt test.txt
 122 cat test.txt
 123 ls -lt test.txt
 124 nano test.txt
 125 ls -lt
 126 whoami
 127 ls -lt
 128 ls -lt test.txt
 129 chmod 744 a.out
 130 ls -lt test.txt
 131 ls -lt 
 132 ls
 133 ls -lt
 134 nano script.sh
 135 echo $0
 136 whereis sh
 137 ls -lt /bin/sh
 138 ls -lt /bin/*sh*
 139 nano script.sh
 140 ls -lt
 141 cat script.sh
 142 ls
 143 script.sh
 144 ./script.sh
 145 chmod 744 script.sh
 146 ls -lt
 147 script.sh
 148 ./script.sh
 149 ls -lt
 150 cd ABC/
 151 ls -lt
 152 cat test.txt
 153 cd ..
 154 nano script.sh
 155 ls -lt
 156 rmdir ABC/
 157 rmdir --help
 158 rm ABC
 159 rm -r ABC 
 160 ls -lt
 161 nano script.sh
 162 script.sh
 163 ls
 164 ls -lt /bin/ls
 165 ls -lt /bin/
 166 ls
 167 echo $PATH
 168 ls
 169 script.sh
 170 ls
 171 history 
