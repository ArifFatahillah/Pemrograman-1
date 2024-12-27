#include <stdio.h>

int main()
{
float a = 400000;
float b = 350000;

printf("Harga sepatu A adalah %.0f\n",a);
printf("Harga sepatu B adalah %.0f\n",b);

float Diskon_sepatu_A= a - (a*0.13);
float Diskon_sepatu_B= b - (b*0.21);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n",Diskon_sepatu_A);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f",Diskon_sepatu_B);
return 0;
}