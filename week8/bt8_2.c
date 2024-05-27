#include <stdio.h>
#include <conio.h>
int main()
{
	char c;
	while((c=getch())!=EOF)
	{
		if (c == ('\t')){
		
		putchar('\\');
		putchar('\\');
		putchar('t');
    } else 
	if( c == ('\\')) {
		putchar('\\');
		putchar('\\');}
		else
		if (c == ('\b')){
			putchar('\\');
			putchar('\\');
			putchar('b');}
		else putchar(c);
		}
	return 0;
}


// #include <stdio.h>
// #include <conio.h>

// int main()
// {
// 	int c,d;
// 	while ((c=getchar()) != EOF)
// 	{
// 		d=0;
// 		if (c=='\\')
// 		{
// 			putchar('\\');
// 			putchar('\\');
// 			d=1;
// 		}
// 		if (c=='\t')
// 		{
// 			putchar('\\');
// 			putchar('t');
// 			d=1;
// 		}
// 		if (c=='\b')
// 		{
// 			putchar('\\');
// 			putchar('b');
// 			d=1;
// 		}
// 		if (d==0)
// 		{
// 			putchar(c);
// 		}
		
// 	}
// 	return 0;

// }