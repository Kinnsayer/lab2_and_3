#include <stdio.h>
#include <locale.h>
#include <math.h> 
#include <stdlib.h>


#define ENG_D 2.54      
#define SPANISH_D 2.32166   
#define OLD_LITHUANIAN_D 2.7076 
#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES 

void task2_3() {
	setlocale(0, "");
	int n = 2;
	int L = 733;
	int k = 3;
	int m = 7;

	printf("����:\n");
	printf("%10d\n", n);
	printf("%10d\n", L);
	printf("___________________\n");
	printf("�����:%-+*.*f\n", k + m + 2, m, (double)n/L);
}

void task3_2() {
        int dym;
        float result;
        int choice;

        setlocale(0, "");
        printf("�������� ��� ����� ��� ���������:\n");
        printf("1 - ���������� ����\n");
        printf("2 - ��������� ����\n");
        printf("3 - �������������� ����\n");
        printf("������� ����� (1, 2 ��� 3): ");
        scanf("%d", &choice);

    
        printf("������� ���������� ������ ��� ���������: ");
        scanf("%d", &dym);

      
        if (choice == 1) {
            result = ENG_D * dym;
            printf("%d ������ (����������) � ��� %.2f ��\n", dym, result);
        }
        else if (choice == 2) {
            result = SPANISH_D * dym;
            printf("%d ������ (���������) � ��� %.2f ��\n", dym, result);
        }
        else if (choice == 3) {
            result = OLD_LITHUANIAN_D * dym;
            printf("%d ������ (��������������) � ��� %.2f ��\n", dym, result);
        }
        else {
            printf("�������� �����. ���������� �����.\n");
        }
    
}

void task_3dz() {
    setlocale(0, "");
    const double kg_to_pounds = 2.20462;
    const double pound_to_ounces = 16.0;
    double kilograms;

    printf("������� ��� � �����������: ");

   
    if (scanf("%lf", &kilograms) != 1) {
        printf("������ �����! ����������, ������� �������� ��������.\n");
        return;
    }

    if (kilograms <= 0) {
        printf("��� ������ ���� �������������!\n");
        return;
    }

    double total_pounds = kilograms * kg_to_pounds;

    int pounds = (int)total_pounds;

    double ounces = (total_pounds - pounds) * pound_to_ounces;

    printf("%.2f �� = %d ������ � %.2f �����\n", kilograms, pounds, ounces);
}
void main() {
     task_3dz();
}
