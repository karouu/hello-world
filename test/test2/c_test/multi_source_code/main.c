#include <stdio.h>
#include <conio.h>
// Ҳ���Բ�д extern��Ϊ�˳���ɶ��ԣ�����д��
extern long sum(int, int);
// ����д extern
extern char* OS;
int main()
{
    int n1 = -1, n2 = -100;
    printf("��%d�ӵ�%d�ĺ�Ϊ%ld [By %s]", n1, n2, sum(n1, n2), OS);
    getch();
    return 0;
}