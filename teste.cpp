#include <iostream>
using namespace std;

class myClass{
    public:
        int age;
        string name;
    myClass(){
        name = "TALVAN";
    }

    void myMethod(){
        if (age >= 19) age ++;
        else age += 5;

    }
    
};

int main()
{
    myClass myOBJ;

    cout << "Write your age: " << endl;
    cin >> myOBJ.age;
    myOBJ.myMethod();

    cout <<"Name: " << myOBJ.name << endl;
    cout << "Age: "<< myOBJ.age << " years old" << endl;

}