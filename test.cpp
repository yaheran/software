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
	   {"��10","��-10",16.43,3.36,2340,5.43,9.75,3200,1250,6600},
	   {"��11","��-11B",21.9,4.15,2876,5.93,14.7,3790,1500,8000},
	   {"��15","��-15",22.28,4.12,2937.6,5.92,15,3500,1750,6200},
	   {"��16","��-16",21.19,5.6,14.7,2.15,18000,3900,1300,12000},
	   {"��31","��-31",16.9,4.8,11.5,1.8,18000,3500,1250,7000}
	};
	int i;
	while (true)
	{
		printf("***************************************\n");
		printf("��������1��ʾ����ս������ȫ������    ||\n��������2��ѯ��ս������ָ������      ||\n��������3������ս������������        ||\n����0������ѯ                        ||\n");
		printf("���������֣�1-3��:                       ");
		int a;
		cin >> a;
		printf("********************\n");
		if (a == 1) {
			for (i = 0; i <= 4; i++) {
				printf("%s %s ����:%.3lf ����:%.3lf ����ٶ�:%.3lf ���и߶�:%.3lf ��չ:%.3lf ��󺽳�:%.3lf �뾶:%.3lf ����ص���:%.3lf\n", feiji[i].name, feiji[i].xinghao, feiji[i].jichang, feiji[i].jikuan, feiji[i].sudu, feiji[i].gaodu, feiji[i].yizhan, feiji[i].hangcheng, feiji[i].banjing, feiji[i].zaidanliang);

			}
		}
		else if (a == 2) {
			printf("����1��ʾ����\n����2��ʾ��չ\n����3��ʾ�뾶\n");
			printf("���������֣�1-3��:");
			int b;
			cin >> b;
			if (b == 1) {
				for (i = 0; i < 5; i++) {
					printf("%s  ����Ϊ:%.3lf  \n", feiji[i].xinghao, feiji[i].jikuan);
				}
			}
			else if (b == 2) {
				for (i = 0; i < 5; i++) {
					printf("%s  ��չΪ:%.3lf  \n", feiji[i].xinghao, feiji[i].yizhan);
				}
			}
			else if (b == 3) {
				for (i = 0; i < 5; i++) {
					printf("%s  �뾶Ϊ:%.3lf  \n", feiji[i].xinghao, feiji[i].banjing);
				}
			}
			else {
				printf("Error");
			}
		}
		else if (a == 3) {
			printf("����1��������\n����2�ٶ�����\n");
			printf("���������֣�1-2��:");
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
		{"��10","��-10",16.43,3.36,2340,5.43,9.75,3200,1250,6600},
		{"��11","��-11B",21.9,4.15,2876,5.93,14.7,3790,1500,8000},
		{"��15","��-15",22.28,4.12,2937.6,5.92,15,3500,1750,6200},
		{"��16","��-16",21.19,5.6,14.7,2.15,18000,3900,1300,12000},
		{"��31","��-31",16.9,4.8,11.5,1.8,18000,3500,1250,7000}
	};
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (feiji[j].jichang > feiji[j + 1].jichang)
			{
				swap(feiji[j], feiji[j + 1]);
			}
		}

	}for (i = 4; i >= 0; i--) {
		printf("%s %s  ����:%.3lf\n", feiji[i].name, feiji[i].xinghao, feiji[i].jichang);

	}
}
void  sudu() {
	int i, j;
	struct Zhandouji feiji[5] = {
		{"��10","��-10",16.43,3.36,2340,5.43,9.75,3200,1250,6600},
		{"��11","��-11B",21.9,4.15,2876,5.93,14.7,3790,1500,8000},
		{"��15","��-15",22.28,4.12,2937.6,5.92,15,3500,1750,6200},
		{"��16","��-16",21.19,5.6,14.7,2.15,18000,3900,1300,12000},
		{"��31","��-31",16.9,4.8,11.5,1.8,18000,3500,1250,7000}
	};
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (feiji[j].sudu > feiji[j + 1].sudu)
			{
				swap(feiji[j], feiji[j + 1]);
			}
		}

	}for (i = 4; i >= 0; i--) {
		printf("%s %s  ����ٶ�:%.3lf\n", feiji[i].name, feiji[i].xinghao, feiji[i].sudu);
	}
}
