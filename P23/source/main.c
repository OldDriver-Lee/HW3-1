#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Sstatus {Continue,win,lose};
int rolldice(void);

int main(void)
{
	int sum;
	int mypoint;

	enum Status gamestatus;

	srand(time(NULL));
	sum = rolldice();

	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = win;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lose;
		break;
	default:
		gamestatus = Continue;
		mypoint = sum;
		printf("Point is %d\n", mypoint);
		break;
	}

	while (gamestatus == Continue)
	{
		sum = rolldice();
		if (sum == mypoint){
			gamestatus = win;
		}
		else if(sum == 7){
			gamestatus = lose;
		}
	}
	if (gamestatus == win){
		printf("Plary win\n");
	}
	else{
		printf("plary lose\n");
	}

	system("pause");
	return 0;
}

int rolldice(void){
	int die1;
	int die2;
	int worksum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;

	printf("Player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;
}