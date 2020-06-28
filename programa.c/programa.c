 
 int main(){

int populacao [1000][3], i=0, codigo, eficacia, codigo1, cod;

printf("Informe um codigo:");

scanf("%d", &cod);

if(cod == 1){

scanf("%d\n", &populacao[i][0]);

scanf("%d\n", &populacao[i][1]);

populacao[i][2] = -1;

printf("Informe um codigo:");

scanf("%d\n", &codigo);}

if(cod == 2){

for(i = 0; i < 0; i++){

if(codigo == populacao[i][0] || populacao[i][2] == -1){

printf("Erro");}

if(codigo == populacao [i][0] && populacao [i][2] != -1){

printf("Informe a eficacia do remedio");

scanf("%d\n", &eficacia);

populacao [i][2] = eficacia;}}

}

if(cod == 3){

for (i < 1000; i = 0; i++){

if(populacao[i][2]!= -1){

codigo1=(populacao [i][2]*populacao[i][1]/100);

printf("populacao %d = %d\n", populacao[i][0],codigo1);}

}

for(i < 1000; i = 0; i++){

if(populacao[i][2] == 0){

printf("populacao %d = 0\n", populacao[i][0]);}

}}

if(cod == 4){

return 0;

}}