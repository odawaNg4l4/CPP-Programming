/*#include<iostream>
using namespace std;

void myFunction();
int main()
{
    myFunction();
    return 0;
}

void myFunction(){
    cout << "I AM A MINI ME";
}*/

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