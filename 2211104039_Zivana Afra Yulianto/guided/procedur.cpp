#include <iostream>
#include <conio.h>

using namespace std;

// prosedure
void greet(string name)
{
    cout << "hallo" << name << "!" << endl;
}

int main()
{
    // pemanggilan prosedure
    greet("alice");
}