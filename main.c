#include <stdio.h>
#include <stdlib.h>
//#define ROWS 3
//#define COLS 3
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*	int i;
		int grade [SIZE];
		printf("5명의 점수를 입력하세요.\n");
		
		for (i=0;i<SIZE;i++)
			scanf("%d", &grade[i]);
			
		for (i=0;i<SIZE;i++)
			printf("grade[%d] = %d\n", i, grade[i]);
			
	return 0;
	*/
	int i, average;
	int sum = 0;
	int grade[SIZE];

	for (i=0; i<SIZE;i++)
	{
		printf("학생 성적을 입력하세요 :");
		scanf("%d", &grade[i]);
		sum += grade[i]; 
	}
	average = sum / SIZE;
	printf("성적 평균 : %d\n", average);
	return 0;
}
