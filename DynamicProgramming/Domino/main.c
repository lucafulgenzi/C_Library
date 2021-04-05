#include <stdio.h>
#include <stdlib.h>

int domino(int);
int optDomino(int);
int recDomino(int);

int main(){
  int num = 0;

  printf("Inserisci il numero delle tessere: ");
  scanf("%d", &num);

  printf("LE possibili soluzioni sono: %d", optDomino(num));
  return 0;
}

int domino(int n){
  int DP[n];
  DP[0] = 1;
  DP[1] = 1;

  for (int i = 2; i <= n ; ++i) {
    DP[i] = DP[i-1]+DP[i-2];
  }
  return DP[n];
}


int optDomino(int n){
  int DP = 1;
  int DP1 = 1;
  int DP2 = 1;

  for (int i = 2; i <= n ; ++i) {
    DP = DP1;
    DP1 = DP2;
    DP2 = DP + DP1;
  }
  return DP2;
}

int recDomino(int n){
  if(n <= 1)
    return 1;
  else
    return recDomino(n-1)+recDomino(n-2);
}