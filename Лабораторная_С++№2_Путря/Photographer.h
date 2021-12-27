#pragma once
#include <iostream>
#include <string>

using namespace std;

class Photographer
{
public:

	Photographer(); //constructor пустой(базовый) //при создании объекта вызывается один из существующих конструкторов; То есть конструктор - создает объект класса;

	Photographer(const string& name, const string& surname, char gender,   short year_birth,  short year_start);//constructor с параметрами

	//gettes, setters
	void setName(const string& name);
	void setSurname(const string& surname);
	void setGender(const char gender);
	void setYearBirth(const short year_birth);
	void setYearStart(const short year_start);
	void setRating(const double rating);


	string getName()const;
	string getSurname()const;
	char getGender()const;
	short getYearBirth()const;
	short getYearStart()const;
	double getReting()const;

	

	void ImitationPhotosessions();

	void SortAndPrint(Photographer* arr,size_t len);

	


	//Sort

//serialize\deserialize
	void serialize()const;
	void serialize(const string& filename)const;
	void deserialize();
	void deserialize(const string& filename);

	//Prints
	void PrintPhotographer();



	~Photographer();//destructor
	

private:

	string name_;
	string surname_;
	char gender_;
	short year_birth_;
	short year_start_;
	double rating_;
};

