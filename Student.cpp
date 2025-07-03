#include "Student.h"

Student::Student()
{
    full_name = new char[50] {"undefined"};
    average_grade = 0;
    educational_institution = new char[50] {"undefined"};
    group_number = rand() % 9000 + 1000;
}

Student::Student(const char* full_name, float average_grade, const char* institution, int group_number)
{
    int size_name = strlen(full_name) + 1;
    this->full_name = new char[size_name];
    strcpy_s(this->full_name, size_name, full_name);

    this->average_grade = average_grade;

    int size_inst = strlen(institution) + 1;
    this->educational_institution = new char[size_inst];
    strcpy_s(this->educational_institution, size_inst, institution);

    this->group_number = group_number;
}

Student::~Student()
{
    cout << "Deleted student: " << full_name << endl;
    delete[] full_name;
    delete[] educational_institution;
}

void Student::showInfo()
{
    cout << "Full name: " << full_name << endl;
    cout << "Average grade: " << average_grade << endl;
    cout << "Educational institution: " << educational_institution << endl;
    cout << "Group number: " << group_number << endl;
}

void Student::setFullName(const char* new_full_name)
{
    if (strlen(new_full_name) < 3) {
        cout << "Error!" << endl;
        return;
    }
    delete[] full_name;
    int size_name = strlen(new_full_name) + 1;
    full_name = new char[size_name];
    strcpy_s(full_name, size_name, new_full_name);
}

void Student::setAverage_grade(float new_average)
{
    if (new_average < 0 || new_average > 12) {
        cout << "Error!" << endl;
        return;
    }
    average_grade = new_average;
}

void Student::setEducationalInstitution(const char* institution)
{
    if (strlen(institution) < 3) {
        cout << "Error!" << endl;
        return;
    }
    delete[] educational_institution;
    int size_inst = strlen(institution) + 1;
    educational_institution = new char[size_inst];
    strcpy_s(educational_institution, size_inst, institution);
}

const char* Student::getFullName() { return full_name; }
const char* Student::getEducationalInstitution() { return educational_institution; }
float Student::getAverage_grade() { return average_grade; }
int Student::getGroupNumber() { return group_number; }