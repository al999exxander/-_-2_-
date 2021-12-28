#include <array>

template <typename T>
class Vector4<T> {
    std::array<T, 4> _a; // or 'T _a[4];'?
};

template <typename T>
class Matrix4<T> {
    std::array<T, 16> _a; // or 'T _a[16];'?
    //Vector4<T> row0; // or should i use this instead
    //Vector4<T> row1; // it makes other code easier but how
    //Vector4<T> row2; // can i implement something like 
    //Vector4<T> row3; // std::array::data()?
};

cin.get();
return 0;

class ClassName
{

    // ...

    // операторна€ функци€ возвращает значение типа type
    type operator[](int d)
    {
        // ...
    }
};
x = obj[3];

return 0;

//собственный класс с примером инкапсул€ции

#include <iostream>
using namespace std;

class Contact
{
private:
    int mobile_number;           // private variable
    int home_number;             // private variable
public:
    Contact()                    // constructor
    {
        mobile_number = 12345678;
        home_number = 87654321;
    }
    void print_numbers()
    {
        cout << "Mobile number: " << mobile_number;
        cout << ", home number: " << home_number << endl;
    }
};

int main()
{
    Contact Tony;
    Tony.print_numbers();
    // cout << Tony.mobile_number << endl;
    // will cause compile time error
    return 0;
}