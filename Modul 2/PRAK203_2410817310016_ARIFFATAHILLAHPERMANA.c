#include <stdio.h>

int main()
{
float a1, b1, i1, j1, x1, y1, hasil1;

scanf("%f %f %f %f %f %f", &a1, &b1, &i1, &j1, &x1,& y1);

hasil1= (((a1-b1) *i1) / j1) - (x1+y1);

printf("%.3f\n", hasil1);

float a, b, i, j, x, y, hasil;
scanf("%f %f", &a, &b);
scanf("%f %f", &i, &j);
scanf("%f %f", &x, &y);
hasil = (((a-b) *i) / j) - (x+y);
printf("%.3f\n", hasil);

return 0;
}