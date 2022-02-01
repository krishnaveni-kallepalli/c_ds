#include<stdio.h>
int main()
{
//arithmetic
int a,b;
scanf("%d %d",&a,&b);

char ch;
printf("enter char:\n");
scanf(" %c",&ch);
switch(ch)
{
case '+': printf("%d\n",a+b);
	break;
case '-': printf("%d\n",a-b);
	break;
case '*': printf("%d\n",a*b);
	break;
case '/': printf("%d\n",a/b);
	break;
case '%': printf("%d\n",a%b);
	break;
}
}
}
printf("\n");
//relational
printf("%d\n"a<b);
printf("%d\n"a>b);
printf("%d\n"a<=b);
printf("%d\n"a>=b);
printf("%d\n"a==b);
printf("%d\n"a!=b);

printf("\n");
//conditional

(a>b)?printf("a is greater : %d\n",a):printf("b is greater : %d\n",b);

//assignment 

}

