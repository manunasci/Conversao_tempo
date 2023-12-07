#include <stdio.h>

int main(){

int S, H, M;

scanf("%i", &S);

H = (S/60)/60;
M = (s/60)%60;
S = s % 60;

printf("%i:%i:%i\n", H,M,S);

return 0;

}
