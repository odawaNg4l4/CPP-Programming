/*Create an object
#include<iostream>
using namespace std;

class MyClass
{
    public:
        int myNum;
        string myString;
};

    int main(){
    MyClass myObj;
    myObj.myNum = 22;
    myObj.myString = "My name";

    cout << myObj.myNum << "\n";
    cout << myObj.myString;

    return 0;
}

//MULTIPLE OBJECST
#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
};

int main(){
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Mercedes";
    carObj2.model = "C200";
    carObj2.year = 2006;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year<< " " << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << " " << "\n";
    return 0;
}*/

//CLASS METHODS

#include<iostream>
using namespace std;

class MyClass{
    public:
        void myMethod() {
        cout << "Hello World";
        }
};

    int main() {
        MyClass myObj;
        myObj.myMethod();
        return 0;
    }


