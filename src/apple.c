#include <stdio.h>

int n;
int k;
int A[100000];

int p(int A[], unsigned int x){
      int t = 0;
      int i = 0;
      for(i = 0; i < n; i++){
          t += (A[i] + x - 1)/x; /*切り上げの計算をして各iについて和をとる*/
      }
      return t <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
    }

    lb = 0;
    ub = 1e9; /*どちらも、入力制約より*/
    
    while(ub -lb > 1){
        int mid = (ub + lb)/2;

        if (p(A, mid)) ub = mid;
        else lb = mid;
    }
    printf("%d\n", ub);

  return 0;
}



