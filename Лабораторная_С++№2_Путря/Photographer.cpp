#include "Photographer.h"
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

//������������, ����������
Photographer::Photographer() {

	name_ = "V";
	surname_ = "V";
	gender_ = 'm';
	year_birth_ = 2001;
	year_start_ = 2016;
	rating_ = 0.0;

	//cout << "�������� " << name_ << " " << surname_ << " ������� � ����" << endl << endl;;
}

Photographer::Photographer(const string& name, const string& surname, char gender, short year_birth,  short year_start) :
	name_(name), surname_(surname), gender_(gender), year_birth_(year_birth), year_start_(year_start) 
{
	rating_ = 0.0;
	//cout << "�������� " << name_ << " " << surname_ << " ������� � ����" << endl << endl;;
}


Photographer::~Photographer() {
	
	//cout << "�������� " << name_ << " " << surname_ << " ������ � ������" << endl << endl;;
}


//������� , �������

	void Photographer::setName(const string & name) {
		name_ = name;
	}
	void Photographer::setSurname(const string & surname) {
		surname_ = surname;
	}
	void Photographer::setGender(char gender) {
		gender_ = gender;
	}
	void Photographer::setYearBirth(short year) {
		year_birth_ = year;
	}
	void Photographer::setYearStart(short year) {
		year_start_ = year;
	}
	void Photographer::setRating(double rating) {
		rating_ = rating;
	}

	string Photographer::getName()const {
		return name_;
	}
	string Photographer::getSurname()const {
		return surname_;
	}
	char Photographer::getGender()const {
		return gender_;
	}
	short Photographer::getYearBirth()const {
		return year_birth_;
	}
	short Photographer::getYearStart()const {
		return year_start_;
	}
	double Photographer::getReting()const {
		return rating_;
	}

//������������, ��������������

	void Photographer::serialize()const {

	const string path = name_+".txt";
	ofstream fout(path);
	if (fout.is_open()) {
		fout << "���:" << name_ << endl;
		fout << "�������:" << surname_ << endl;
		fout << "���:" << gender_ << endl;
		fout << "��� ��������:" << year_birth_ << endl;
		fout << "��� ������ �������:" << year_start_ << endl;
		fout << "�������" << rating_ << endl;
	}
	fout.close();
}

	void Photographer::serialize(const string & filename)const {

		ofstream fout(filename, ios_base::app | ios::trunc);

		if (fout.is_open()) {

			fout << "���:" << name_ << endl;
			fout << "�������:" << surname_ << endl;
			fout << "���:" << gender_ << endl;
			fout << "��� ��������:" << year_birth_ << endl;
			fout << "��� ������ �������:" << year_start_ << endl;
			fout << "�������" << rating_ << endl;
		}
		fout.close();
	}

	void Photographer::deserialize() {

		const string path = name_ + ".txt";
		string line;
		ifstream fin(path);
		if (fin.is_open()) {

			while (getline(fin, line)) {
				cout << line << endl;
			}
		}
		fin.close();
	}

	void Photographer::deserialize(const string & filename) {

		string line;
		ifstream fin(filename, ios_base::app | ios_base::trunc);
		if (fin.is_open()) {
			while (getline(fin, line)) {
				cout << line << endl;
			}
		}
		fin.close();
	}

	//�����
void Photographer::PrintPhotographer() {

	cout << "���: " << name_ << endl;
	cout << "�������: " << surname_ << endl;
	cout << "���: " << gender_ << endl;
	cout << "��� ��������: " << year_birth_ << endl;
	cout << "��� ������ �������: " << year_start_ << endl;
	cout << "�������: " << rating_ << endl << endl;;
	
}
//���������


void Photographer::ImitationPhotosessions() {

	for (size_t i = 0; i < 3; i++) {
		cout << "����������� �" << i+1 << endl;
		//srand(i);

		int votes = rand() % 30;
		if (votes >= 10) {
			rating_ += rand() % 10 + 1;
		}
		cout << "�������������: " << votes << " �� ��������� " << name_ << endl;
		cout << "������� �������: " << rating_ << " ��������� " << name_ << " " << surname_ << endl << endl;
	}
}

void Photographer::SortAndPrint(Photographer* arr,size_t len) {

	
	Photographer tmp;
	for (size_t i = 0; i < len; i++) {
		int max = i;
		for (size_t j = i+1; j < len; j++) {
			if (arr[j].rating_ > arr[max].rating_) {
				max = j;
			}
		}
		if (max != i) {
			tmp = arr[i];
			arr[i] = arr[max];
			arr[max] = tmp;
		}
	}

	for (size_t i = 0; i < 3; i++) {
		cout << "����� � " << i + 1 << " ����� ��������: " << arr[i].name_ << endl;
		arr[i].PrintPhotographer();
	}
}

