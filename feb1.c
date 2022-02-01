#include<stdio.h>
int main()
{
//DATATYPES
//premitive
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
//derived
//array elements
int arr[] = {1, 2, 3, 4, 5};        
int length = sizeof(arr)/sizeof(arr[0]);         
printf("Elements of given array: \n");    
for (int i = 0; i < length; i++) 
{     
        printf("%d\n", arr[i]);     
}    

//ptr
//sum of 2 ptr
int *p1,*p2,a,b,c;
scanf("%d %d",&a,&b);
p1=&a;
p2=&b;
c=*p1+*p2;
printf("\n%d\n",c);
//rotate elements
int x=1,y=2,z=3;
int *px,*py,*pz;
px=&x;
py=&y;
pz=&z;

printf("%d %d %d",*px,*py,*pz);



return 0;    
}      

