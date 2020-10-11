#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct score
{
	float gat;
	float pat1;
	float pat3;
};
struct score t1, t2, t3;

int real_score() {
	float W;
	float a1 = ((t1.gat * 20) / 300) + ((t1.pat1 * 30) / 300) + ((t1.pat3 * 50) / 300);
	float a2 = ((t2.gat * 20) / 300) + ((t2.pat1 * 30) / 300) + ((t2.pat3 * 50) / 300);
	float a3 = ((t3.gat * 20) / 300) + ((t3.pat1 * 30) / 300) + ((t3.pat3 * 50) / 300);
	if (a1 >= 0 && a2 >= 0 && a3 >= 0) {
		if (a1 >= a2 && a1 >= a3) {
			{
				if (a1 == a2 && a1 == a3) {
					printf("Studen 1,2 and 3 is max score = %.2f", a1);
				}
				else if (a1 == a2) {
					printf("Studen 1 and 2 is max score = %.2f", a1);
				}
				else printf("Studen 1  is max score = %.2f", a1);
			}
		}
		else if (a2 >= a3 && a2 > a1) {
			{
				if (a3 == a2) {
					printf("Studen 2 and 3 is max score = %.2f", a2);
				}
				else printf("Studen 2 is max score = %.2f", a2);
			}
		}
		else if (a3 > a1 && a3 > a2) {
			printf("Studen 3 is max score = %.2f", a3);
		}
	}
	else printf("ERROR");
	return 0;
}


int main() {
	int a1, a2, a3;
	int i = 1;
	while (i < 4) {
		if (i == 1) {
			printf("Input %d student score of gat\n", i);
			scanf("%f", &t1.gat);
			printf("Input %d student score of pat1\n", i);
			scanf("%f", &t1.pat1);
			printf("Input %d student score of pat3\n", i);
			scanf("%f", &t1.pat3);
			i++;
		}
		else if (i == 2) {
			printf("Input %d student score of gat\n", i);
			scanf("%f", &t2.gat);
			printf("Input %d student score of pat1\n", i);
			scanf("%f", &t2.pat1);
			printf("Input %d student score of pat3\n", i);
			scanf("%f", &t2.pat3);
			i++;
		}
		else if (i == 3) {
			printf("Input %d student score of gat\n", i);
			scanf("%f", &t3.gat);
			printf("Input %d student score of pat1\n", i);
			scanf("%f", &t3.pat1);
			printf("Input %d student score of pat3\n", i);
			scanf("%f", &t3.pat3);
			i++;
		}
	}
	if (t1.gat >= 0 && t2.gat >= 0 && t3.gat >= 0 && t1.pat1 >= 0 && t1.pat3 >= 0 && t2.pat1 >= 0 && t2.pat3 >= 0 && t3.pat1 >= 0 && t3.pat3 >= 0) {
		real_score();
	}
	else printf("ERROR");

}