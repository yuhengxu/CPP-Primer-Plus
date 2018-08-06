#include<cmath>
#include<iostream>

using namespace std;

int main()
{
    double area;
    cout << "get a number : ";
    cin >> area;
    double side = sqrt(area);
    cout << "The sqrt result is :"
         << side
         << endl;

    system("pause");
    return 0;
}