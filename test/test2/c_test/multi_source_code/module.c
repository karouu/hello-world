#include <stdio.h>
// ��ǰ����ϵͳ
char *OS = "Windows 7";
long sum(int fromNum, int endNum){
    int i;
    long result = 0;
    // ���������Ϲ��򣬷��� -1
    if(fromNum<0 || endNum<0 || endNum<fromNum){
        return -1;
    }
    for(i=fromNum; i<=endNum; i++){
        result += i;
    }
    // ���ش��ڵ���0��ֵ
    return result;
}