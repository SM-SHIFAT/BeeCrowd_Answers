
#include <stdio.h>

int
main ()
{
  int n, i;
  scanf ("%d", &n);

  char vill[30];
  fgets(vill, 20, stdin);

  for (i = 0; i < n; i++)
    {
      fgets (vill, 30, stdin);
      printf ("Y\n");
    }
  return 0;
}
