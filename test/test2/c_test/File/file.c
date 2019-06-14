/*
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
  
    //如果文件不存在，给出提示并退出
    if( (fp=fopen("D:\\demo.txt","rt")) == NULL ){
        printf("Cannot open file, press any key to exit!");
        getch();
        exit(1);
    }
    //每次读取一个字节，直到读取完毕
    while( (ch=fgetc(fp)) != EOF ){
        putchar(ch);
    }
    putchar('\n');  //输出换行符
    
    if(ferror(fp)){
        puts("读取出错");
    }else{
        puts("读取成功");
    }
    fclose(fp);
    return 0;
}


*/


/*
//单字符输入文件中
#include<stdio.h>
int main(void)
{
	FILE *fp;    
	char ch;
	

	//判断文件是否打开成功
	if((fp=fopen("D:\\demo.txt","wt+"))==NULL)
	{
		printf("Can't open the file,press any key to exit!\n");
		getch();
		exit(1);	
	} 
	
	printf("Input a string:\n");
	while((ch=getchar())!='\n')
	{
		fputc(ch,fp);
	}
	fclose(fp);
	return 0;
} 

*/

/*
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    //判断文件是否成功打开
    if( (fp=fopen("D:\\demo.txt","wt+")) == NULL ){
        printf("Cannot open file, press any key to exit!\n");
        getch();
        exit(1);
    }
    printf("Input a string:\n");
    //每次从键盘读取一个字符并写入文件
    while ( (ch=getchar()) != '\n' ){
        fputc(ch,fp);
    }
    fclose(fp);
    return 0;
}*/


/*
#include<stdio.h>
int main(void)
{
	FILE *fp_1=fopen("D:\\demo1.txt","wt+");
	FILE *fp_2=fopen("D:\\demo2.txt","at+");
	FILE *fp_3=fopen("D:\\demo3.txt","wt+");
	char ch;
	while((ch=getchar())!='\n')
	{
		fputc(ch,fp_1);
		fputc(ch,fp_2);
		fputc(ch,fp_3);

	}
	fclose(fp_1);
	fclose(fp_2);
	fclose(fp_3);

	return 0;
}*/

/*
#include<stdio.h>
int main(void)
{
	char ch;
	
	FILE *fp_1=fopen("D:\\demo1.txt","at+");
	FILE *fp_2=fopen("D:\\demo2.txt","wt+");
	FILE *fp_3=fopen("D:\\demo3.txt","wt+");
	//char ch;
	while((ch=getchar())!='\n')
	{
		fputc(ch,fp_1);
		fputc(ch,fp_2);
		fputc(ch,fp_3);

	}
	
	
	fclose(fp_1);
	fclose(fp_2);
	fclose(fp_3);

	
	
	FILE *fp_4=fopen("D:\\demo1.txt","r+");
	FILE *fp_5=fopen("D:\\demo2.txt","rt+");
	FILE *fp_6=fopen("D:\\demo3.txt","rt+");
	
   
	while((ch=fgetc(fp_4))!=EOF)
		{putchar(ch);}
		//printf("\n");
		putchar('\n');
	fclose(fp_4);

	
	while((ch=fgetc(fp_5))!=EOF)
		{putchar(ch);}
		//printf("\n");
		putchar('\n');
		fclose(fp_5);
	

	while((ch=fgetc(fp_6))!=EOF)
	{	putchar(ch);}
		printf("\n");
		
	putchar('\n');
	fclose(fp_6);
	
	return 0;
}*/

/*
//文件进行字符串的读写 
#include<stdio.h>
#define N 1000
int main(void){

	char ch,str[102],strTemp[100],s[N];

	
	FILE *fp=fopen("D:\\demo1.txt","at+");
	printf("please input a string.\n");
		gets(strTemp);
		//strcat(str,"\n");
		//strcat(str,strTemp);
		fputs(strTemp,fp);
		//printf("%s",str);
		fclose(fp);
		
		
	FILE *fp_1=fopen("D:\\demo1.txt","rt+");
	while(fgets(s,N,fp_1) !=NULL)
	printf("%s",s);
	//puts(s);
	
		/*
		while((ch=fgetc(fp))!=EOF)
		putchar(ch);
		putchar('\n');
		fclose(fp);*/
		//return 0;
		
}
*/

#include<stdio.h>
#define N 5
int main(void)
{
	//输入的数据放入a,读取的数据放入b
	int a[N],b[N];
	int i,size=sizeof(int);
	FILE *fp=fopen("D:\\demo2.txt","rb+");
	
	//输入数据
	for(i=0;i<N;i++)
	a[i]=getchar();
	//将a写入文件中
	fwrite(a,size,N,fp);
	//将文件中的位置指针重定向到文件开头
	rewind(fp);
	//从文件读取内容保存到b
	fread(b,size,N,fp);
	//显示b的内容
	for(i=0;i<N;i++)
		printf("%d",b[i]);
		
		fclose(fp);
	return 0; 
} 
