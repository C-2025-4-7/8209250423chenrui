#include <iostream>
#include "student.h"
using namespace std; 
void Student::display()
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(int n, const char* na, char s)
{
    num = n;
    sex = s;
    int i = 0;
    while (na[i] != '\0' && i < 19)
    {
        name[i] = na[i];
        i++;
    }
    name[i] = '\0';
}