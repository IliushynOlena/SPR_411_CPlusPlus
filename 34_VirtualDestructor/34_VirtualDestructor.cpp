//#include <iostream>
//using namespace std;
//
//class Student
//{
//protected:
//    string name;
//    string spetialization;
//    int* marks;
//    int countMarks;
//public:
//    Student():name("no name"), spetialization("none"), marks(nullptr), countMarks(0) {}
//    Student(string name, string spetialization):name(name), spetialization(spetialization)
//    {   // rand() % 10 - 0....9
//        countMarks = rand() % 10 + 1;
//        marks = new int[countMarks];
//        for (int i = 0; i < countMarks; i++)
//        {
//            marks[i] = rand() % 5 + 8;//0...4   8--12
//        }       
//    }
//    virtual void Print()const
//    {
//        cout << "Name : " << name << endl;
//        cout << "Spetialization : " << spetialization << endl;
//        cout << "Marks : " ;
//        for (int i = 0; i < countMarks; i++)
//        {
//            cout << marks[i] << " ";
//        }
//        cout << endl;
//    }
//    virtual ~Student()
//    {
//        if (marks != nullptr)
//            delete[]marks;
//    }
//};
//class Asspirant: public Student
//{
//    string *subjects;
//    int countSub;
//public:
//    Asspirant() : subjects(nullptr), countSub(0), Student() {}
//    Asspirant(string name, string sp, initializer_list<string> list) : Student(name,sp) 
//    {
//        countSub = list.size();
//        subjects = new string[countSub];
//        int i = 0;
//        for (string s : list)
//        {
//            subjects[i] =s;
//            i++;
//        }
//    }
//    void Print()const override
//    {
//        Student::Print();
//        cout << "Subject : ";        
//        for (int i = 0; i < countSub; i++)
//        {
//            cout << subjects[i] << " , ";
//        }
//        cout << "\n---------------------------\n";
//    }
//    ~Asspirant() 
//    {
//        if (subjects != nullptr)
//            delete[]subjects;
//    }
//};
//
//int main()
//{
//    srand(time(0));
//    Student st("Vasia","Water engineer");
//    st.Print();
//
//    Asspirant a("Inna", "Design", {"Main page", "UI/UX design","Trends in internet"});
//    a.Print();
//    cout << "-------------------------------------" << endl;
//    Student* students[3]
//    {
//        new Student("Vasia","Water engineer"),
//        new Asspirant("Inna", "Design", {"Main page", "UI/UX design","Trends in internet"}),
//        new Asspirant("Oleg", "Programmer", {"C++", "C#"})
//    };
//    for (int i = 0; i < 3; i++)
//    {
//        students[i]->Print();
//        delete students[i];
//    }
//}
//
