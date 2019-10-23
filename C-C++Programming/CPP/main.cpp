#include <iostream>
#include "student.h"
using namespace std;


int main() {
    char name[100];
    int age;
    cin >> name >> age;

    Student A(name, age);
    cout << A.getname();

    return 0;
};