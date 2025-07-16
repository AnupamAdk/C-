#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float grade;

    // Overloading the << operator for output
    friend ostream& operator<<(ostream& os, const Student& s) {
        os << s.name << " " << s.age << " " << s.grade;
        return os;
    }

    // Overloading the >> operator for input
    friend istream& operator>>(istream& is, Student& s) {
        is >> s.name >> s.age >> s.grade;
        return is;
    }
};

int main() {
    ofstream outFile("students.txt");
    if (!outFile) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    Student students[5];
    for (int i = 0; i < 5; ++i) {
        cout << "Enter name, age, and grade for student " << i + 1 << ": ";
        cin >> students[i];
        outFile << students[i] << endl;
    }

    outFile.close();

    ifstream inFile("students.txt");
    if (!inFile) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    cout << "Student details from file:" << endl;
    Student s;
    while (inFile >> s) {
        cout << "Name: " << s.name << ", Age: " << s.age << ", Grade: " << s.grade << endl;
    }

    inFile.close();
    return 0;
}

