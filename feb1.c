#include<stdio.h>
int main()
{
//DATATYPES
int i=10;
double d=12.77777777;
char ch='k';
float f=1.223;
printf("%d\n%f\n%c\n%f\n",i,d,ch,f);
printf("%lu\n%lu\n%lu\n%lu\n",sizeof(i),sizeof(d),sizeof(ch),sizeof(f));
short int si;
long int li;
unsigned short int us;
unsigned long int ul;
unsigned int ui;
signed char sc;
unsigned char uc;
long double ld;
printf("%lu\n%lu\n%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n",sizeof(si),sizeof(li),sizeof(us),sizeof(ul),sizeof(ui),sizeof(sc),sizeof(uc),sizeof(ld));
}
