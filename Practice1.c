//��ӡ100~200֮�������
/*include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i, j, m = 0;
	for (i = 101; i <= 200; i = i + 2){
		for (j = 2; j <= sqrt(i); j++)
		if (i%j == 0) break;
		if (j > sqrt(i)){
			printf("%d ", i);
			m = m + 1;
		}
		if (m % 10 == 0)
			printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}*/
//2.����˷��ھ���
/*#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j;
	for (i = 1; i < 10; i++){
		for (j = 1; j <= i; j++)
			printf("%d*%d=%2d ", i, j, i*j);
		printf("\n");
	}
	system("pause");
	return 0;
}*/
//3.�ж�1000��C2000��֮�������
#include<stdio.h>
#include<stdlib.h>
int main(){
	int year = 1000;
	for (year = 1000; year <= 2000; year++){
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			printf("%d", year);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
