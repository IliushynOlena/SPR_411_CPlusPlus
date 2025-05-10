#include <iostream>
using namespace std;
//struct
//int char bool float double long short
struct Date
{
    //int int int char[] char[]
    int day;
    int month;
    int year;
    char day_name[15];
    char day_month[15];
};

struct Person {
    char name[20];
    char surname[20];
    int age;
    char gender[20];
    int salary;
    Date birthday;
    Date hiredate;
};
void Input(Person& p)
{
    cout << "Enter name : "; cin >> p.name;
    cout << "Enter surname : "; cin >> p.surname;
    cout << "Enter Age : "; cin >> p.age;
    cout << "Enter gender : "; cin >> p.gender;
    cout << "Enter salary : "; cin >> p.salary;
    cout << "Enter Birthday day : "; cin >> p.birthday.day;
    cout << "Enter Birthday month : "; cin >> p.birthday.month;
    cout << "Enter Birthday year : "; cin >> p.birthday.year;
    cout << "Enter Hiredate day : "; cin >> p.hiredate.day;
    cout << "Enter Hiredate month : "; cin >> p.hiredate.month;
    cout << "Enter Hiredate year : "; cin >> p.hiredate.year;
}
void Show(Person p)
{
    cout << "Name : " << p.name << endl;
    cout << "Surname : " << p.surname << endl;
    cout << "Age : " << p.age << endl;
    cout << "Gender : " << p.gender << endl;
    cout << "Salary : " << p.salary << endl;
    cout << "Birthday : " << p.birthday.day << "/" << p.birthday.month << "/" << p.birthday.year << endl;;
    cout << "Hiredate : " << p.hiredate.day << "/" << p.hiredate.month << "/" << p.hiredate.year << endl;;
}
int main()
{

    //Person Nick = { "Nick","Tomson",22,"male",30000,{10,05,2002},{1,1,2022} };
    //Show(Nick);
    //Input(Nick);
    //Show(Nick);


    int a = 5;
    int arr[5] = { 1,2,3,4,5 };
    Date date = {10,5,2025,"saturday" ,"May"};
    cout << "------------- Day today : ------------------" << endl;
    cout << "Day : " << date.day << endl;
    cout << "Month : " << date.month << endl;
    cout << "Year : " << date.year << endl;
    cout << "Day name : " << date.day_name << endl;
    cout << "Month name : " << date.day_month << endl;

    Date birthday;
    cout << "Enter your birthday day : ";
    cout << "Enter day : "; cin >> birthday.day;
    cout << "Enter month : "; cin >> birthday.month;
    cout << "Enter year : "; cin >> birthday.year;
    cout << "Enter name of day : "; cin >> birthday.day_name;
    cout << "Enter name of month : "; cin >> birthday.day_month;
    cout << "------------- Birthday Day  : ------------------" << endl;
    cout << "Day : " << birthday.day << endl;
    cout << "Month : " << birthday.month << endl;
    cout << "Year : " << birthday.year << endl;
    cout << "Day name : " << birthday.day_name << endl;
    cout << "Month name : " << birthday.day_month << endl;
  
    Date copy;
    copy = birthday;
    cout << "------------- Copy Birthday Day  : ------------------" << endl;
    cout << "Day : " << copy.day << endl;
    cout << "Month : " << copy.month << endl;
    cout << "Year : " << copy.year << endl;
    cout << "Day name : " << copy.day_name << endl;
    cout << "Month name : " << copy.day_month << endl;

    Date* ptr = nullptr;
    ptr = &birthday;
    cout << ptr->day << endl;
    cout << ptr->month << endl;
    cout << ptr->year << endl;






}

