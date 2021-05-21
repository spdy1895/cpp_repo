// passign structures to functions through call by value and call by reference.
#include <iostream>
#include <stdlib.h>
struct Emp
{
    int empno;
    char name[25];
    double salary;
};

int main()
{
    system("clear");
    Emp e1;

    void ReadEmp(Emp &);
    void ShowEmp(Emp);

    ReadEmp(e1);
    ShowEmp(e1);

    return 0;
}

// call by reference.
void ReadEmp(Emp &e)
{
    std::cout << "\n enter employee no: ";
    std::cin >> e.empno;
    std::cout << "\n enter employee name: ";
    std::cin.ignore();
    std::cin.getline(e.name, 25);
    std::cout << "\n enter employee salary: ";
    std::cin >> e.salary;
}

// call by value.
void ShowEmp(Emp e)
{
    std::cout << "\n employee details \n";
    std::cout << "Empno:" << e.empno << std::endl;
    std::cout << "Name:" << e.name << std::endl;
    std::cout << "Salary:" << e.salary << std::endl;
}
