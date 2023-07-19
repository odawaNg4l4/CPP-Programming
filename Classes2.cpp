/*Constructor Parameters
#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
};

int main(){
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

}

//ACCESS SPECIFIERS
#include<iostream>
using namespace std;

class MyClass{
    public:
        int x;
    private:
        int y;
};

int main(){
    MyClass myObj;
    myObj.x = 25;
    myObj.y = 50;
    return 0;
}

//ENCAPSULATION
#include<iostream>
using namespace std;
 class Employee{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
 };
 int main(){
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
 }*/

 //INHERITANCE
 #include<iostream>
 using namespace std;

class Vehicle{
    public:
        string brand = "FORD";
        void honk(){
            cout << "Tuut, tuut \n";
        }
};

class Car: public Vehicle{
    public:
        string model = "Mustang";

};

int main(){
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}