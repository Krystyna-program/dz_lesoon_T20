#include <iostream>
#include "Student.h"
#include "Plane.h"

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

    cout << "===============================================================\n";
    cout << "\n=== Plane #1: ===\n";
    Plane plane1;
    plane1.showInfo();

    cout << "\n--- Updating Plane #1 ---\n";
    plane1.setDeparturePoint("Kyiv");
    plane1.setDestinationPoint("Berlin");
    plane1.setAircraftMake("Boeing 737");
    plane1.setFlightNumber(1023);
    plane1.ticketSales();       
    plane1.ticketSales();
    plane1.returnTicket();      
    plane1.showInfo();

    cout << "\n=== Plane #2: ===\n";
    Plane plane2("Lviv", 2045, "Paris", "Airbus A320", 180, 178);
    plane2.showInfo();

    cout << "\n--- Testing ticket sales and returns on Plane #2 ---\n";
    plane2.ticketSales();  // маЇ зб≥льшити к≥льк≥сть зайн€тих м≥сць до 179
    plane2.ticketSales();  // маЇ зб≥льшити до 180 (максимум)
    plane2.ticketSales();  // вже вс≥ м≥сц€ зайн€т≥
    plane2.returnTicket(); // одне м≥сце зв≥льнитьс€
    plane2.showInfo();
}
