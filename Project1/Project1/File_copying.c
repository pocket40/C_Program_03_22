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
//EOF(End of file) �ؽ�Ʈ ������ ������ �˸��� ���� ���� ��
//��ȯ���� -1
