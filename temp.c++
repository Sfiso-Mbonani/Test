#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int age;
    cout << "Please enter name and age: ";
    cin >> name >> age;
    cout << endl;

    cout << "Welcome " << name << " , you are " << age << " years old" << endl;

    return 0;
}
