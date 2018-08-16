#include<iostream>
using namespace std;
int main()
{
    cout << "Hiw many apples do you have?" << endl;

    int apples = 0;
    cin >> apples;

    cout << "I have " << apples << " apples in my bag." << endl;
    apples++;
    cout << "There is onr more." << endl;
    cout << "Now I have " << apples << "apples in my bag." << endl;

    system("pause");
    return 0; 
}