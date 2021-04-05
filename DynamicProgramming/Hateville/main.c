#include <stdio.h>

#define NUM 5

int hateville(int [], int);
int recHateville(int [], int);
int max(int, int);

int main(){
  int D[] = {10, 5, 5, 10, 1};

  printf("Il massimo dei fondi é: %d", recHateville(D, NUM));

  return 0;
}

int hateville(int D[], int n){
  int DP[n];
  DP[0] = 0;
  DP[1] = D[0];
  for (int i = 2; i <= n ; ++i) {
    DP[i] = max(DP[i-1], DP[i-2]+D[i-1]);
  }
  return DP[n];
}

int recHateville(int D[], int n){
  if(n == 0){
    return 0;
  }else if( n == 1){
    return D[0];
  }else{
    return max(recHateville(D, n-1), recHateville(D, n-2) + D[n-1]);
  }
}

int max(int a, int b){
  if (a>b)
    return a;
  else
    return b;
}