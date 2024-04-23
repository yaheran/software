#include<stdio.h>
#include<iostream>
using namespace std;
struct	Zhandouji {
	char name[10];
	char xinghao[10];
	double jichang;
	double jikuan;
	double sudu;
	double gaodu;
	double yizhan;
	double hangcheng;
	double banjing;
	double zaidanliang;
};

void  jichang();
void  sudu();

int main() {
	struct Zhandouji feiji[5] = {
	   {"歼10","歼-10",16.43,3.36,2340,5.43,9.75,3200,1250,6600},
	   {"歼11","歼-11B",21.9,4.15,2876,5.93,14.7,3790,1500,8000},
	   {"歼15","歼-15",22.28,4.12,2937.6,5.92,15,3500,1750,6200},
	   {"歼16","歼-16",21.19,5.6,14.7,2.15,18000,3900,1300,12000},
	   {"歼31","歼-31",16.9,4.8,11.5,1.8,18000,3500,1250,7000}
	};
	int i;
	while (true)
	{
		printf("***************************************\n");
		printf("输入数字1显示所有战斗机的全部参数    ||\n输入数字2查询所战斗机的指定参数      ||\n输入数字3对所有战斗机进行排序        ||\n输入0结束查询                        ||\n");
		printf("请输入数字（1-3）:                       ");
		int a;
		cin >> a;
		printf("********************\n");
		if (a == 1) {
			for (i = 0; i <= 4; i++) {
				printf("%s %s 机长:%.3lf 机宽:%.3lf 最大速度:%.3lf 飞行高度:%.3lf 翼展:%.3lf 最大航程:%.3lf 半径:%.3lf 最大载弹量:%.3lf\n", feiji[i].name, feiji[i].xinghao, feiji[i].jichang, feiji[i].jikuan, feiji[i].sudu, feiji[i].gaodu, feiji[i].yizhan, feiji[i].hangcheng, feiji[i].banjing, feiji[i].zaidanliang);

			}
		}
		else if (a == 2) {
			printf("输入1显示机宽\n输入2显示翼展\n输入3显示半径\n");
			printf("请输入数字（1-3）:");
			int b;
			cin >> b;
			if (b == 1) {
				for (i = 0; i < 5; i++) {
					printf("%s  机宽为:%.3lf  \n", feiji[i].xinghao, feiji[i].jikuan);
				}
			}
			else if (b == 2) {
				for (i = 0; i < 5; i++) {
					printf("%s  翼展为:%.3lf  \n", feiji[i].xinghao, feiji[i].yizhan);
				}
			}
			else if (b == 3) {
				for (i = 0; i < 5; i++) {
					printf("%s  半径为:%.3lf  \n", feiji[i].xinghao, feiji[i].banjing);
				}
			}
			else {
				printf("Error");
			}
		}
		else if (a == 3) {
			printf("输入1机长排序\n输入2速度排序\n");
			printf("请输入数字（1-2）:");
			int c;
			cin >> c;
			if (c == 1)
				jichang();
			else if (c == 2)
				sudu();
			else
				printf("Error");
		}
		else if (a == 0) {
			break;
		}
		else {
			printf("Error\n");
		}
	}
	return 0;
}

void  jichang() {
	int i, j;
	struct Zhandouji feiji[5] = {
		{"歼10","歼-10",16.43,3.36,2340,5.43,9.75,3200,1250,6600},
		{"歼11","歼-11B",21.9,4.15,2876,5.93,14.7,3790,1500,8000},
		{"歼15","歼-15",22.28,4.12,2937.6,5.92,15,3500,1750,6200},
		{"歼16","歼-16",21.19,5.6,14.7,2.15,18000,3900,1300,12000},
		{"歼31","歼-31",16.9,4.8,11.5,1.8,18000,3500,1250,7000}
	};
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (feiji[j].jichang > feiji[j + 1].jichang)
			{
				swap(feiji[j], feiji[j + 1]);
			}
		}

	}for (i = 4; i >= 0; i--) {
		printf("%s %s  机长:%.3lf\n", feiji[i].name, feiji[i].xinghao, feiji[i].jichang);

	}
}
void  sudu() {
	int i, j;
	struct Zhandouji feiji[5] = {
		{"歼10","歼-10",16.43,3.36,2340,5.43,9.75,3200,1250,6600},
		{"歼11","歼-11B",21.9,4.15,2876,5.93,14.7,3790,1500,8000},
		{"歼15","歼-15",22.28,4.12,2937.6,5.92,15,3500,1750,6200},
		{"歼16","歼-16",21.19,5.6,14.7,2.15,18000,3900,1300,12000},
		{"歼31","歼-31",16.9,4.8,11.5,1.8,18000,3500,1250,7000}
	};
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (feiji[j].sudu > feiji[j + 1].sudu)
			{
				swap(feiji[j], feiji[j + 1]);
			}
		}

	}for (i = 4; i >= 0; i--) {
		printf("%s %s  最大速度:%.3lf\n", feiji[i].name, feiji[i].xinghao, feiji[i].sudu);
	}
}
