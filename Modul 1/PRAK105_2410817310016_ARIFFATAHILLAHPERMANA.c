#include <stdio.h>

int main()
{
int a = 9;
int b = 5;
int x = 8;
int y = 8;

printf("Variabel A bernilai %d\n",a);
printf("Variabel b bernilai %d\n",b);
printf("Variabel x bernilai %d\n",x);
printf("Variabel y bernilai %d\n",y);

int total1= a % b;
int total2= x % y;
int sisa = total1 + total2;
printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n",sisa);
return 0;
}