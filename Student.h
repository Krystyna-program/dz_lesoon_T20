#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char* full_name;
    float average_grade;
    char* educational_institution;
    int group_number;

public:
    Student();
    Student(const char* full_name, float average_grade, const char* institution, int group_number);
    ~Student();

    void showInfo();

    void setFullName(const char* full_name);
    void setAverage_grade(float new_average);
    void setEducationalInstitution(const char* institution);

    const char* getFullName();
    const char* getEducationalInstitution();
    float getAverage_grade();
    int getGroupNumber();
};