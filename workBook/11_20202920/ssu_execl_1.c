#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	printf("this is the original program\n");
	execl("./ssu_execl_test_1","ssu_execl_test_1","param1","param2","param3",(char*)0);
	//인자들을 넣어주고 execl을 실행시켜줍니다.
	printf("%s\n","this line should never get printed\n");
	exit(0);
}

