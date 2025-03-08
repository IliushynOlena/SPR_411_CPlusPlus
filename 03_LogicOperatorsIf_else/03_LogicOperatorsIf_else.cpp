
#include <iostream>
using namespace std;

int main()
{
    /*
    //operators + - * / 
    // 2 + 2 
    //Унарні  -5     +5 
    //Бінарні 
    //Тернарні
    //15%3 = 0   15/3=5.0  5*3=15  15 -15 = 0
    //15%2 = 1   15/2= 7.5  7*2 - 14 15 -14 = 1
    //3%10 = 3    3/10 = 0.333 0*10 = 0   ..3-0 = 3

    //Інкремент і декремент
    int a = 8;
    cout << "a = " << a << endl;
    //Інкремент  постфіксної форми
    a++; //a += 1;//a =  a + 1;
    cout << "a = " << a << endl;
    //Інкремент  префіксною форми
    ++a;
    cout << "a = " << a << endl;
    //декремент  постфіксної форми
    a--;//a -= 1;//a = a - 1;
    cout << "a = " << a << endl;
    //декремент  префіксною форми
    --a;
    cout << "a = " << a << endl;


    int b = 9;
    cout << ++b << endl;//<--------------------
    cout << b++ << endl;//-------------------->
    cout << b << endl;

    int c = 10;
    cout << "c = " << c << endl;
    c += 12;//c = c + 12;
    cout << "c = " << c << endl;
    c -= 12;//c = c - 12;
    cout << "c = " << c << endl;
    c *= 12;//c = c * 12;
    cout << "c = " << c << endl;
    c /= 12;//c = c / 12;
    cout << "c = " << c << endl;
    c %= 12;//c = c % 12;
    cout << "c = " << c << endl;

    //Перетворення типів
    //Класифікація за діапазоном значень
    //1. Звужуюче перетворення
    int number = 3.35;
    cout << "number = " << number << endl;

    //2. Розширююче перетворення.
    float num = 5;
    cout << "num = " << num << endl;


    //Класифікація за способом здійснення перетворення
    //1. Неявне перетворення.
    int A = 23.5;
    cout << "A = " << A << endl;

    //2. Явне перетворення
    double num1 = 37.4;//37.4000000000000000
    float num2 = (float) num1;//double ---> float - 37.4000000
    int num3 = (int) num2;//float ---> int   37

    int digit;
    cout << "Enter digit : ";
    cin >> digit;
    float res = (float)digit / 100.0;
    cout << "Res = " << res << endl;
    */
    //Уніфікована ініціалізація
  /*  int a = { 5 };
    cout << a << endl;
    int b = { 3.35 };
    cout << b << endl;
    */


    //Логічні операції > < >= <= == !=
 /*   
    1. Оператори порівняння;  > < >= <= 
    2. Оператори рівності; == !=
    3. Логічні оператори об'єднання та негативна інверсія. && || !
    */
    /*
    cout << (5 > 3) << endl;; // на екрані буде одиниця, тому що
    // твердження (5>3) — істина.
    cout << (3 < 2) << endl; // на екрані буде 0, тому що (3<2) — брехня

    cout << (5 != 3) << endl; // на екрані буде одиниця,
    // тому що твердження (5!=3) — істина.
    cout << (3 == 2) << endl; // на екрані буде 0, тому що (3==2) —
    // брехня.

    if (true)
    {
        //дія 1;
    }
    else
    {
        //дія 2;
    }

    float a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    int max;
    int min;
  /*  if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }*/

   /* max = (a > b) ? a : b;
    cout << "Max = " << max << endl;*/
   /* if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }*/
  /*  min = (a < b) ? a : b;
    cout << "Min = " << min << endl;*/


    //if (b == 0) 
    //{
    //    cout << "You can*t divide by zero " << endl;
    //}
    //else
    //{
    //    cout << "Result : " << a << " / " << b << " = " << a / b << endl;
    //}
    ////Тернарний оператор
    ////ТВЕРДЖЕННЯ АБО ВИРАЗ ? ДІЯ1 : ДІЯ2;
    //(b == 0) ? cout << "You can*t divide by zero " << endl : 
    //    cout << "Result : " << a << " / " << b << " = " << a / b << endl;

    //(b != 0) ? cout << "Result : " << a << " / " << b << " = " << a / b << endl : 
    //    cout << "You can*t divide by zero " << endl;






    //int age;
    //cout << "Enter age : ";
    //cin >> age;
    //if (age > 0 && age < 125)
    //{
    //    cout << "Age is correct " << endl;
    //}
    //else
    //{
    //    cout << "Age is incorrect " << endl;
    //}

    int month;
    cout << "Enter month : ";
    cin >> month;
    if (month == 1)
    {
        cout << "January " << endl;
    }
    else if (month == 2)
    {
        cout << "February " << endl;
    }
    else if (month == 3)
    {
        cout << "March " << endl;
    }
    else if (month == 4)
    {
        cout << "April " << endl;
    }
    else if (month == 5)
    {
        cout << "May " << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
   

}

