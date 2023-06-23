#include<iostream>
using namespace std;

void myFunction();
int main()
{
    myFunction();
    return 0;
}

void myFunction(){
    cout << "I AM A MINI ME";
}

#include<iostream>
using namespace std;
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

#include<iostream>
using namespace std;
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}


#include<iostream>
using namespace std;
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

#include<iostream>
using namespace std;
int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}

#include<iostream>
using namespace std;

int myFunction(int x, int y)
{
  return x + y;
}

int main()
{
  cout << myFunction(6,2);
  return 0;
}
