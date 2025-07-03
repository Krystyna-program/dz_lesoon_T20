#include <iostream>
#include "Student.h"

int main()
{
    cout << "\t--- Creating students ---\n";
    cout << "\t- Student #1 -\n";
    Student student("Ivanov Ivan Ivanovych", 11.3, "Kyiv Polytechnic Institute", 1256);
    student.showInfo();
    cout << "\t-- Changes --\n";
    student.setFullName("Petrenko Petro Petrovych");
    student.setAverage_grade(9.8);
    student.setEducationalInstitution("Lviv National University");
    student.showInfo();

    cout << "\t- Student #2 -\n";
    Student student2("Kovalenko Oleg Ivanovych", 9.5, "Odessa National University", 1234);
    student2.showInfo();
    cout << "\t-- Changes --\n";
    student2.setFullName("Oleg Ivanov Kovalenko");
    student2.showInfo();
}
