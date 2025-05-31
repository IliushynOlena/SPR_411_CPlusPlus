#include <iostream>
#include <string>
using namespace std;

//
//struct Player
//{
//	string name;
//	short age;
//	int games;
//	int goals;
//};
//
//void PrintPlayer(Player & pl)
//{	
//	cout << "Name : " << pl.name << endl;
//	cout << "Age : " << pl.age << endl;
//	cout << "Games : " << pl.games << endl;
//	cout << "Goals : " << pl.goals << endl;
//	cout << endl;
//}
//
//void InitPlayer(Player& pl)
//{
//	cout << "Enter name : "; cin >> pl.name;
//	cout << "Enter age : "; cin >> pl.age;
//	pl.games = 0;
//	pl.goals = 0;
//}
//
//void AdddgameToPlayer(Player& pl, int goals = 0)
//{
//	pl.games++;
//	pl.goals += goals;
//}

//struct Player1
//{
//	//public:
//	string name;
//	short age;
//	int games;
//	int goals;
//};
class Player
{
	//private (default)
private:
	string name;
	short age;
	int games;
	int goals;
public:
	void PrintPlayer()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Games : " << games << endl;
		cout << "Goals : " << goals << endl;
		cout << endl;
	}
	void InitPlayer()
	{
		cout << "Enter name : "; cin >> name;
		cout << "Enter age : "; cin >> age;
		games = 0;
		goals = 0;
	}
	void AdddgameToPlayer(int goals = 0)
	{
		games++;
		this->goals += goals;
	
	}
};

class Student
{
private:
	// data members. змінні-члени класу.
	string name;
	int marks[3];
public:
	//member function. функції-члени класу, методи
	float getAverage()
	{
		float sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum += marks[i];
		}
		return sum / 3.0;
	}
	//set  
	void setName(string name)
	{
		this->name = name;
	}
	void setMark(int mark, int index)
	{
		if (mark < 1 || mark > 12)
			mark = 0;
		marks[index] = mark;
	}
	//get
	string getName()
	{
		return name;
	}
	int getMark(int index)
	{
		return marks[index];
	}
};

void Hello(){}
int main()
{
	int a;

	Student st; //object 
	st.setName("Mukola");
	st.setMark(12, 0);
	st.setMark(8, 1);
	st.setMark(10, 2);

	cout << "Name : " << st.getName() << ". Marks : " 
		<< st.getMark(0) << ", " << st.getMark(1) << ", " << st.getMark(2) << endl;
	cout << "Average mark : " << st.getAverage() << endl;
	cout << Hello << endl;
	Hello();
	

	Student st2;
	st2.setName("Olga");
	st2.setMark(12, 0);
	st2.setMark(12, 1);
	st2.setMark(12, 2);
	
	cout << "Name : " << st2.getName() << ". Marks : "
		<< st2.getMark(0) << ", " << st2.getMark(1) << ", " << st2.getMark(2) << endl;
	cout << "Average mark : " << st2.getAverage() << endl;
	//Player pl;
	//pl.InitPlayer();
	//pl.PrintPlayer();

	//pl.AdddgameToPlayer();
	//pl.PrintPlayer();

	//pl.AdddgameToPlayer(5);
	//pl.PrintPlayer();
	
	//old variant
	/*Player pl;
	InitPlayer(pl);
	PrintPlayer(pl);

	AdddgameToPlayer(pl);
	PrintPlayer(pl);
	AdddgameToPlayer(pl,2);
	PrintPlayer(pl);
	AdddgameToPlayer(pl,4);
	PrintPlayer(pl);*/
  
	//string userName = "admin";
	//cout << userName << endl;
	//cout << "Enter user name : ";
	////cin >> userName;
	//getline(cin, userName);
	//cout << userName << endl;


}

