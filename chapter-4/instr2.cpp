//instr2.cpp -- класс string

#include <iostream>
#include <string>

int main()
{
using namespace std;
const int ArSize = 20;
string name;
string dessert;
 
cout << "Enter your name:\n";
getline(cin, name);  // reads through newline
cout << "Enter your favorite dessert:\n";
getline(cin, dessert);
cout << "I have some delicious " << dessert;
cout << " for you, " << name << ".\n";
cin.get();
return 0;
}

