#include<stdio.h>
main()
{
	int c;
	c = getchar();
	while (c !=EOF)
	{
		putchar(c);
		c = getchar();
	}
}
//EOF == Ctrl + z 
//EOF(End of file) 텍스트 파일의 끝임을 알리기 위한 문자 값
//반환값은 -1
