#include <iostream>
using namespace std;

struct employee_record
{
    int employee_id;
    int salary;
};

void increase_salary(employee_record employee_copy, int bonus_amount)
{
    employee_copy.salary = employee_copy.salary + bonus_amount;

    cout << "Inside function(Copy): " << employee_copy.salary << endl;
}

int main()
{
    employee_record employee_main;
    int bonus_amount;

    cin >> employee_main.employee_id;
    cin >> employee_main.salary;
    cin >> bonus_amount;

    cout << "Before function call (main): " << employee_main.salary << endl;

    increase_salary(employee_main, bonus_amount);

    cout << "After function call (main): " << employee_main.salary << endl;

    return 0;
}