#include <iostream>
#include <iomanip>

using namespace std;

class Student {
public:
    string name;
    int numCourses;
    double* grades;

    Student(string n, int num) : name(n), numCourses(num) {
        grades = new double[numCourses];
    }

    double calculateGPA() {
        double sum = 0.0;
        for (int i = 0; i < numCourses; ++i) {
            sum += grades[i];
        }
        return (numCourses > 0) ? (sum / numCourses) : 0.0;
    }
};

int main() {
    Student student("Limon Haque", 5);

    cout << "Enter grades for " << student.name << "'s courses:" << endl;
    for (int i = 0; i < student.numCourses; ++i) {
        cout << "Course " << (i + 1) << ": ";
        cin >> student.grades[i];
    }

    cout << fixed << setprecision(2);
    cout << "GPA for " << student.name << ": " << student.calculateGPA() << endl;

    delete[] student.grades;

    return 0;
}
