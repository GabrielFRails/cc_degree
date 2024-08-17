clear
printf "compilando com aux.c\n"
gcc -no-pie -o main main.c aux.c 
./main
printf "\ncompilando com aux.S\n"
gcc -no-pie -o main main.c aux.S 
./main

printf "\ncompilando sum.c\n"
gcc -no-pie -o main sum.c 
./main
printf "\ncompilando sum.S\n"
gcc -no-pie -o main1 sum.S 
./main1
