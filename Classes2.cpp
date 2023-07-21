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
 }

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

//MULTILEVEL INHERITANCE
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

class MyChild: public MyClass {
};

class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}

//MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

class MyClass{
    public:
        void myFunction(){
            cout << "Some content in parent class";
        }
};

class MyOtherClass{
    public:
        void myOtherFunction(){
        cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

//ACCESS SPECIFIER
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}

class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}
