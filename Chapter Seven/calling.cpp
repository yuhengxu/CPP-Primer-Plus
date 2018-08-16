// calling.cpp -- defining, prototyping, and calling a function

#include<iostream>
using namespace std;

void simple();              //function prototype

int main()
{
    cout << "main() will call the simple() function:" << endl;
    simple();                                       //function call
    cout << "main() id finished with the simple() function." << endl;

    system("pause");
    return 0;
}

void simple()
{
    cout << "I'm but a simple function." << endl;
}