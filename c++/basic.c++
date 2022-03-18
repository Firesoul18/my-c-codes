#include <iostream>
#include <string>
// #define a 6
using namespace std;
int main()
{
    // int a = 6;
    // std::cout << "HEYH Ladies " << a << std::endl;
    // std ::cout << "grand ";
    // string name = "harry";
    // cout<<name.substr(2,3)<<endl;

    // int a = 6;
    // int *ptra;
    // ptra = &a;
    // cout<<ptra<<endl<<*ptra<<endl<<&a;

    class Student
    {
        // private:
    public:
        // protected:

        string name;
        int Class;
        int RN;
        
        Student(string n, int s, int y)
{
    this->name=n;
    this->Class=s;
    this->RN=y;
}
        void prd()
        {
            cout << "Student Name : " << this->name << endl
                 << "Class : " << this->Class << endl
                 << "Roll No. : " << this->RN << endl;
        }

        sec()
        {
            cout<<secretpass;
        }

        private:
        string secretpass = "SimsIm";
    };

    Student y("Yogi", 12, 12);
    // y.name = Yogi;
    // y.Class = 12;
    // y.RN = 23;

    y.prd();
    // cout<<secretpass;
    y.sec();


    return 0;
}