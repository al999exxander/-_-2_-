#include <iostream>
#include <iomanip>
#include <Windows.h>
#include "Photographer.h"
#include <ctime>
#include "Fraction.h"
#include "Vector.h"
#include "Matrix.h"
using namespace std;


int main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Лабораторная работа №2, Мамонтов Влад ИВТ-1, 2курс\nВыберите номер задания или \'0\' для выхода: ";
	int num = 0;
	cin >> num;

	while (num != 0) {
		switch (num)
		{
		case 1:
			void Task_1();
			Task_1();
			break;
		case 2:
			void Task_2();
			Task_2();
			break;
		case 3:
			void Task_3();
			Task_3();
			break;
		}
		
		system("pause");
		system("cls");
		cout << "Выберите номер задания (1-3) или \'0\' для выхода: ";
		cin >> num;
	}
	system("pause");
	return 0;
}

void Task_1() {
	system("cls");

	Matrix* mat = new Matrix(4, 4);
	mat->PrintArray();
	/*(*mat)++;
	mat->PrintArray();*/
	//++(*mat);
	//mat->PrintArray();
	//--(*mat);
	//mat->PrintArray();
	//(*mat)--
	//mat->PrintArray();

	Vector* vec = new Vector(mat->getArray(),mat->getRows(),mat->getCols());
	vec->PrintArray();
	//(*vec)++;
	//vec->PrintArray();
	//++(*vec);
	//vec->PrintArray();
	//--(*vec);
	//vec->PrintArray();
	//(*vex)--;
	//vec->PrintArray();

	delete mat;
	delete vec;
}

void Task_2() {
	system("cls");

	Fraction num1(4, 7);
	Fraction num2(5, 7);
	Fraction num3(2, 7);
	Fraction num4(1, 3);



	Fraction res1 = num1 * num4;

	Fraction res2 = num2 * num4;

	Fraction res3 = num3 * num4;


	Fraction res4 = res1+res2+res3;

	/*Fraction::printAsFraction(0.25);
	Fraction::printAsFraction(0.43);

	char str[] = "0.43";
	Fraction::printAsFraction(str);
	char str2[] = "0.25";
	Fraction::printAsFraction(str2);*/

	cout<<endl << Fraction::counter << endl;
}

void Task_3() {
	system("cls");
	Photographer  photographer3("Nikita", "Bulychev", 'm', 2001, 2019);
	//photographer3.PrintPhotographer();
	//photographer3.ImitationPhotosessions();

	Photographer* photographer1 = new Photographer();
	photographer1->setName("Vlad");
	photographer1->setSurname("Mamontov");
	photographer1->setGender('m');
	photographer1->setYearBirth(2001);
	photographer1->setYearStart(2016);
	//photographer1->PrintPhotographer();
	//photographer1->ImitationPhotosessions();

	Photographer* photographer2 = new Photographer();
	photographer2->setName("Tanya");
	photographer2->setSurname("Lev");
	photographer2->setGender('f');
	photographer2->setYearBirth(2001);
	photographer2->setYearStart(2017);
	//photographer2->PrintPhotographer();
	//photographer2->ImitationPhotosessions();

	const size_t len = 3;
	Photographer arr[len] = { *photographer1,*photographer2,photographer3 };

	for (size_t i = 0; i < len; i++) {
		//srand(i);
		arr[i].ImitationPhotosessions();
	}

	photographer1->SortAndPrint(arr,len);

	delete photographer1;
	delete photographer2;
}



