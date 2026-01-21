#include <stdio.h>

int main()
{
  int n = 0;
  int sum = 0;
  int zahl = 0;
  printf("Geben Sie ein, wie viele Zahlen Sie haben möchten: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
    {
      printf("\n%d. Wert: ", i);
      scanf("%d", &zahl);

      sum += zahl;
    }

  printf("\nSumme ist: %d. \n", sum);
  
  return 0;
}