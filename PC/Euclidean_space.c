
#include<stdio.h>
#include<conio.h>
void
main ()
{
  struct dis
  {
    int a;
    int b;
  } val;
  printf ("Enter the distanced between first point and reference point\n");
  scanf ("%d", &val.a);
  printf ("Enter the distance between second point ant reference point\n");
  scanf ("%d", &val.b);
  printf ("Total distance=%d", val.a + val.b);
  getch ();
}
