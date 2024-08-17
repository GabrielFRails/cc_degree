printf "compilando com aux.c\n"
gcc -no-pie -o main main.c aux.c 
./main
printf "\ncompilando com aux.S\n"
gcc -no-pie -o main main.c aux.S 
./main