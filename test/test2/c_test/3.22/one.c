/*
#include<stdio.h>
#include<windows.h>

int main(void)
{
	//������λ�� 
	COORD coord;
	coord.X=3;
	coord.Y=3;
	//��ȡconsole buffer �����
	HANDLE ConsoleHandle=GetStdHandle(STD_OUTPUT_HANDLE);
	//���ù��λ��
	SetConsoleCursorPosition(ConsoleHandle,coord);
	
	printf("chenda\n");
	
	return 0; 
} */
/*

#include<stdio.h>
#include<windows.h>
void setCursorPosition(int x,int y);
void setColor(int color);
int main(void)
{
	setColor(3);
	setCursorPosition(3,3);
	puts("��");
	
	setColor(0xc);
	setCursorPosition(1,1);
	puts("��");
	
	setColor(6);
	setCursorPosition(6,6);
	puts("��");
	
	return 0;
}
void setCursorPosition(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord); 
}

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}*/

/*
#include<stdio.h>
#include<windows.h>
int main(void)
{
	int a,b;
	char c;
	scanf("%d",&a);
	//fflush(stdin);
	//while((c=getchar())!='\n') ;
	scanf("%*[^\n]%*c");
	scanf("%d",&b);
	printf("a=%d,b=%d\n",a,b);
	
	getch();
	return 0;
}*/

/*
#include<stdio.h>
int main(void)
{
	char *str="summyisgood";
	int a,b;
	a=sizeof *str;
	b=strlen(str);
	printf("a=%d\nb=%d\n",a,b);
	return 0;
} */

/*
#include<stdio.h>
#include<conio.h>
int global;

int main(void){
	int local;
	
	printf("global=%d\n",global);
	printf("local=%d\n",local);
	
	getch();
	return 0;	
}*/

/*
//����ʽ���̼���
//ÿ��Ҫ����һ��������ִ��getch����Ĵ��룬Ҳ����˵getch����Ĵ��뱻������
#include<stdio.h>
#include<conio.h>
int main(void)
{
	char ch;
	int i=0;
	//ѭ��������ֱ����ESC���˳�
	while(ch=getch())
	{
		if(ch==27)
		break;
		else
		printf("Number:%d\n",++i);
	} 
	return 0;
}
*/
/*
//�������Լ��̼��� 
#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{
	char ch;
	int i=0;
	//ѭ��������ֱ��ESC���˳�
	while(1)
	{
		if(kbhit())
		{ //kbhit()�������⻺�������Ƿ����ַ���������ַ����ط�0ֵ��û�з���0. ���ǲ����ȡ�ַ����ַ���Ȼ���ڻ�����. 
			ch=getch();
			if(ch==27)
			break;
		}
		printf("Number:%d\n",++i);
		Sleep(4000);//��ͣ4�� 
	} 
	return 0;
}
*/

/*
//octal �� hexadecimal
int main(void)
{
	int a=-64;
	printf("decimal=%d\noctal=%#o\nhexadecimal=%#x\n",a,a,a);
	return 0;
} */

/*
//�ַ�����ֱ�ӼӼ����������ܱȽϴ�С
int main(void)
{
	char ch;
	int i=0;
	for(;i<=5;i++)
	{
	for(ch='F';ch>=('F'-i);ch--)
 		printf("%c",ch);
 		printf("\n");
	}
	return 0;
} 
*/
/*
#include <stdio.h>
int main(void)
{
	char ch;
	//scanf("%c",&ch);
	for(ch='$';ch !='g';scanf("%c",&ch))
	putchar(ch);
	return 0;
}*/



/*
//����ĳ��ȿ����Ǳ��� 
#include<stdio.h>
#define SIZE 8
int main(void)
{
	int by_twos[SIZE];
	int index;
	for(index=0;index<SIZE;index++)
	{
		by_twos[index]=index*2;
		printf("%d|",by_twos[index]);
	} 
	return 0;
}*/

/*
//�챻�滵��for�� ; ; �� 
#include <stdio.h>
int main(void)
{
	int k;
	for(k=1,printf("%d:Hi!\n",k);printf("k=%d\n",k),k*k<26;k+=2,printf("Now k is %d\n",k))
	printf("k is %d in the loop\n",k);
	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	const int FREEZING=0;
	float temperature;
	int cold_days=0;
	int all_days=0;
	
	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius,and enter q to quit.\n");
	while(scanf("%f",&temperature)==1)
	{
		all_days++;
		if(temperature<FREEZING)
		cold_days++;
	}
	if (all_days!=0)
		printf("%d days total:%.lf%% were below freezing.\n",
		all_days,100.0*(float)cold_days/all_days);
	if (all_days==0)
		printf("No data entered!\n");
		
	return 0;
	
}*/

//�������char����Ųһλ, [blank] keeps the same. 
#include<stdio.h>
#define SPACE ' '
int main(void)
{
	char ch;
	ch=getchar();
	while(ch!='\n')
	{
		if (ch==SPACE)  putchar(ch);
		else  putchar(ch+1);
		ch=getchar();
	}
	putchar(ch);   //it equals to '\n'. 
	return 0;
}
