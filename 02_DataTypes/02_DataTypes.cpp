#include <iostream>
using namespace std;


int main()
{
    /*
    1. Числові.
    2. Символьні.
    3. Логічні.
    */

    float temperature = 36.6;
    const double PI = 3.14465879874987987987;
    cout << "PI = " << PI << endl;
    //PI = 100; - error
    //Ctrl+D - dublicate of row
    cout << "PI = " << PI << endl;


    int a = 5;
   /* INT b = 6; - error */
    /*
       Змінна — область оперативної пам'яті, що володіє
        власним ім'ям і призначена для зберігання даних, які можуть бути змінені.

        Константа — область оперативної пам’яті, що володіє
        власним ім’ям і призначена для зберігання постійних даних.
    */
    int age = 15;
    cout << age << "\n";
    cout << "age = " << age << endl;
    int Age = 25;
    int ageOfMan = 45;
    int age_of_man = 55;
    int _age = 12;
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    age = 100;
    cout << "age = " << age << endl;
    //int 4a = 4; -error
    //int float = 3.14; - error
    int d;//empty variable - garbage
    int x, y, z;
    x = 5;
    y = 10;
    z = 15;
    cout << "x = " << x << " . y = " << y << " . z = " << z << endl;


    float discount = 0.05;
    float cost = 14.5;
    cout << "How much cost product : ";
    cin >> cost;
    int count = 5;
    cout << "Enter count of product : ";
    cin >> count;

    float price;
    price = count * cost -  count * cost * discount;
    cout << "You have to pay : " << price << " grn" << endl;

    int number;
    cout << "Enter number : ";
    cin >> number;
    cout << "Number = " << number << endl;






}

