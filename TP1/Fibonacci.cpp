#include "Fibonacci.h"
int fibonacciIteratif(int n){
  int n0 = 0;
  int n1 = 1;
  int n2 = 0;
  if(n==0) return n0;
  if(n==1) return n1;
  for(int i=0;i<n;i++){
    n2 = n0 + n1;
    n0 = n1;
    n1 = n2;
  }
  return n0;
};

int fibonacciRecursif(int n){
  if(n <= 1)
    return n;
  else
    return fibonacciRecursif(n-1)+fibonacciRecursif(n-2);
}
