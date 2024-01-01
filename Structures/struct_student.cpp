#include <iostream>
using namespace std;

struct Student {
    int rollno;
    float age;
    string name;
};

int main() {
    struct Student std[5];
    cout<< "Enter 5 students data \n";

    for(int i=0; i<5; i++) {
        cout<< "Enter rollno:"; 
        cin>> std[i].name;

        cout<< "Enter name:";
        cin>> std[i].name;

        cout<< "Enter age:";
        cin>> std[i].age;
    }

    cout<<"\n";

    cout << "List of students: "<< endl;

    for(int i=0; i<=5; i++) {
        cout<< "rollno:" << std[i].name <<endl;

        cout<< "name:" << std[i].name <<endl;

        cout<< "age:" << std[i].age <<endl;
    }
}