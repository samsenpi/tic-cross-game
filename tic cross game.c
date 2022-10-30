



#define _CRT_SECURE_NO_WARNINGS
#define S 3
#include <stdio.h>

#include <time.h>


void display(int b[][3]) {


	int i;

	for (i = 0;i < 3;i++) {


		for (int j = 0;j < 3;j++) {

			printf("%d  |", b[i][j]);

		}
		printf("\n-------------\n");
	}





}
int tocheck(int b[][S]) {
	int flag = 0;


	if (b[0][0] == b[1][1] && b[0][0] == b[2][2])
	{
		if (b[0][0] == 1) {
			flag = 1;
		}
		else if (b[0][0] == 0) {
			flag = 2;
		}

	}
	else
	{

		for (int i = 0;i < S;i++) {

			if (b[i][0] == b[i][1] && b[i][0] == b[i][2]) {

				if (b[i][0] == 1) {
					flag = 1;
				}
				else if (b[i][0] == 0) {
					flag = 2;
				}
				else {
					flag = 0;
				}
			}
		}for (int j = 0;j < S;j++) {

			if (b[0][j] == b[1][j] && b[0][j] == b[2][j]) {


				if (b[0][j] == 1) {
					flag = 1;
				}
				else if (b[0][j] == 0) {
					flag = 2;
				}
				else {
					flag = 0;
				}


			}
		}

	}
	return flag;

}

/*switch (b[i][j]) {


						case 1:
							printf("player 1 won!\n");
							printf("congrats!!\n");
							break;

						case 0:

							printf("player 2 won!\n");
							printf("congrats!!\n");
							break;
						default:

							break;

*/




void column(int a[][S], int row, int temp, int tem2, int choice, int choice2, int p1, int p2)
{





	printf("player1:\n");

	printf("on which box from  (0,1,2)  you want to enter '%c' from row %d:", p1, row);
	scanf_s("%d", &temp);

	if (temp == 0) {

		printf("enter (%d )for %c in box %d:", choice, p1, temp);
		scanf_s("%d", &a[row][temp]);

	}
	else if (temp == 1) {

		printf("enter (%d )for %c in box %d:", choice, p1, temp);
		scanf_s("%d", &a[row][temp]);

	}
	else if (temp == 2) {

		printf("enter (%d )for %c in box %d:", choice, p1, temp);
		scanf_s("%d", &a[row][temp]);

	}if (temp == 3) {
		printf("INVALID!:\n");

		printf("on which box from  (0,1,2)  you want to enter '%c' from row %d:", p1, row);
		scanf_s("%d", &temp);


	}

	//printf("player2:\n");

	//printf("on which box from (0,1,2) you want to enter '%c' from row%d:", p2, row);
	//scanf_s("%d", &tem2);

	//if (tem2 == 0) {

	//	printf("enter (%d )for %c in box %d:", choice2, p2, tem2);
	//	scanf_s("%d", &a[row][tem2]);

	//}

	//else if (tem2 == 1) {

	//	printf("enter (%d )for %c in box %d:", choice2, p2, tem2);
	//	scanf_s("%d", &a[row][tem2]);

	//}
	//else if (tem2 == 2) {

	//	printf("enter (%d )for %c in box %d:", choice2, p2, tem2);
	//	scanf_s("%d", &a[row][tem2]);

	//}if (tem2 == 3) {
	//	//valid(tem2,row,p2);
	//	printf("INVALID!:\n");

	//	printf("on which box from  (0,1,2)  you want to enter '%c' from row %d:", p2, row);
	//	scanf_s("%d", &tem2);

	//}

	display(a);





}





void column2(int a[][S], int row2, int tem2, int choice2, char p2)
{


	printf("player2:\n");

	printf("on which box from (0,1,2) you want to enter '%c' from row%d:", p2, row2);
	scanf_s("%d", &tem2);

	if (tem2 == 0) {

		printf("enter (%d )for %c in box %d:", choice2, p2, tem2);
		scanf_s("%d", &a[row2][tem2]);

	}

	else if (tem2 == 1) {

		printf("enter (%d )for %c in box %d:", choice2, p2, tem2);
		scanf_s("%d", &a[row2][tem2]);

	}
	else if (tem2 == 2) {

		printf("enter (%d )for %c in box %d:", choice2, p2, tem2);
		scanf_s("%d", &a[row2][tem2]);

	}if (tem2 == 3) {
		//valid(tem2,row,p2);
		printf("INVALID!:\n");

		printf("on which box from  (0,1,2)  you want to enter '%c' from row %d:", p2, row2);
		scanf_s("%d", &tem2);

	}

	display(a);





}
















/*
int valid(int tem2,int row,int p2) {
	int ans = 0;
	if (tem2 == 3) {


	}

	return ans;

}*/

int main() {

	int a[S][S] = { {4,4,4},{4,4,4},{4,4,4} };


	int count = 0;
	int row1;
	int row2 = 0;
	int choice;
	int choice2 = 0;

	int temp = 0;
	int	tem2 = 0;
	char p1, p2;

	printf("enter your choice (1)for'X' or (0)'o':");
	scanf_s("%d", &choice);

	if (choice == 1) {

		p1 = 'X';
		choice2 = 0;
		p2 = 'O';

	}
	else {
		p1 = 'O';
		p2 = 'x';
		choice2 = 1;
	}







	do {

		printf("player1:\n");

		printf("on which row from  (0,1,2)  you want to enter '%c':", p1);
		scanf_s("%d", &row1);

		if (row1 == 0)
		{


			column(a, row1, temp, tem2, choice, choice2, p1, p2);

		}
		else if (row1 == 1)
		{


			column(a, row1, temp, tem2, choice, choice2, p1, p2);

		}
		else if (row1 == 2)
		{


			column(a, row1, temp, tem2, choice, choice2, p1, p2);

		}
		
		printf("player2:\n");

		printf("on whichrow from (0,1,2) you want to enter '%c' :", p2 );
		scanf_s("%d", &row2);

		if (row2 == 0)
		{


			column2(a, row2, tem2, choice2, p2);

		}

		else if (row2 == 1) {


			column2(a, row2, tem2, choice2, p2);

					
		}
		else if (row2 == 2) {


			column2(a, row2, tem2, choice2, p2);

		}

		count++;

	} while (count < 3);


	int go = tocheck(a);

	if (go == 1) {


		printf("player 1 won!\n");
		printf("congrats!!\n");
	}
	else if (go == 2) {

		printf("player 2 won!\n");
		printf("congrats!!\n");


	}
	else {
		printf("draw");
	}





	return 0;
}