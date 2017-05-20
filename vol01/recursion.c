#include <stdio.h>

#define N 10000

int n,A[N];
int rec(int, int);

int main() {
  int i,q,M[N];

  scanf("%d" ,&n);
  for(i=0; i<n; i++) {
    scanf("%d" ,&A[i]);
  }
  scanf("%d" ,&q);
  for(i=0; i<q; i++) {
    scanf("%d" ,&M[i]);
  }
  for(i=0; i<q; i++) {
    if(rec(0,M[i]) == 1) printf("yes\n");
    else printf("no\n");
  }

  return 0;
}

int rec(int s,int m){
  printf("%d",m);
  if(A[s]==m) return 1;
  if(s+1==n) return 0;
  if(rec(s+1,m-A[s]) || rec(s+1,m)) return 1;
  return 0;
}
