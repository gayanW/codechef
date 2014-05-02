/*
 * LANG: C
 * CODE: FCTRL
 * To compute factorial of a number n, we multiply each natural number starting from 1 upto n
 * Trailing zeroes: number of zeros at the end of a number, e.g. 12000 has 3 trailing zeros
 * 
 */
 

#include <stdio.h>

int Z(int N);

int main(void)
{
  int T,ZN;
  unsigned long N;

  scanf("%d", &T);
  while (T > 0) {
    scanf("%d", &N);
    ZN = Z(N);
		
    printf("%d\n", ZN);
    --T;
  }
	
  return 0;
}

int Z(int N) 
{
  int j = 5, counter = 0;
  
  while (j <= N) {
    counter += N / j;
    j *= 5;
  }

  return counter;
}



