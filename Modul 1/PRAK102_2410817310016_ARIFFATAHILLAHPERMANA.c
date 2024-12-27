#include <stdio.h>

int main()
{
float a = 4;
float b = 8;
float c = 3;

printf("Variabel a bernilai %.0f\n",a);
printf("Variabel b bernilai %.0f\n",b);
printf("Variabel c bernilai %.0f\n",c);   

float total= a * b / c;
printf("Hasil dari a dikali b dibagi c adalah %f",total);
return 0;
}