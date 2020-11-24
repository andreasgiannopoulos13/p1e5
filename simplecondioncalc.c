#include <studio.h>

int main(void)
{
	double a, b, temp;
	char c;
	printf ("dose duo dekadikous\n");
	scanf("%1f %1f",&a,&b);
	printf("dose kai ena kefalaio gramma\n");
	scanf("%c",&c);
	
	if(c == 'S')
	{ temp = a+b;
	printf("%1f \n", temp);}
	else if (c == 'M')
	{temp = a * b;
	printf("%1f \n", temp);	}
	
	return 0;
}
