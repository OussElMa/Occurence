#include <stdio.h>

int main() 
{
  int t[5];
  int i, n, x;
  i=0;
  while(i<=5)
  {
      printf("T[%d] = ", i);
      scanf("%d", &t[i]);
      i++;
  }
  printf("Veuillez saisir la valeur de n: ");
  scanf("%d", &n); 
  x=0;
  while(t[i])
  {
    if(t[i] == n)
        x++;
    i++;
  }
  if(x == 0)
        printf("Dommage il n'ya aucune occurence.");
    else
        printf("Yesss, il y'a %d occurence!!", x);

  return 0; 
}