#include "Plane.h"

Plane::Plane() {
    departure_point = new char[50] {"undefined"};
    destination_point = new char[50] {"undefined"};
    aircraft_make = new char[50] {"undefined"};
    total_numberOfSeats = 0;
    numberOfOccupied_seats = 0;
    flight_number = rand() % 9000 + 1000;
}

Plane::Plane(const char* departure, int flight_number, const char* destination, const char* make, int totalSeats, int occupiedSeats) {
    this->flight_number = flight_number;

    int size = strlen(departure) + 1;
    departure_point = new char[size];
    strcpy_s(departure_point, size, departure);

    size = strlen(destination) + 1;
    destination_point = new char[size];
    strcpy_s(destination_point, size, destination);

    size = strlen(make) + 1;
    aircraft_make = new char[size];
    strcpy_s(aircraft_make, size, make);

    total_numberOfSeats = totalSeats;
    numberOfOccupied_seats = occupiedSeats;
}

Plane::~Plane() {
    cout << "Deleted plane #" << flight_number << endl;
    delete[] departure_point;
    delete[] destination_point;
    delete[] aircraft_make;
}

void Plane::showInfo() {
    cout << "Flight number: " << flight_number << endl;
    cout << "Departure: " << departure_point << endl;
    cout << "Destination: " << destination_point << endl;
    cout << "Aircraft make: " << aircraft_make << endl;
    cout << "Total seats: " << total_numberOfSeats << endl;
    cout << "Occupied seats: " << numberOfOccupied_seats << endl;
}

void Plane::setDeparturePoint(const char* point) {
    delete[] departure_point;
    int size = strlen(point) + 1;
    departure_point = new char[size];
    strcpy_s(departure_point, size, point);
}

void Plane::setDestinationPoint(const char* point) {
    delete[] destination_point;
    int size = strlen(point) + 1;
    destination_point = new char[size];
    strcpy_s(destination_point, size, point);
}

void Plane::setAircraftMake(const char* make) {
    delete[] aircraft_make;
    int size = strlen(make) + 1;
    aircraft_make = new char[size];
    strcpy_s(aircraft_make, size, make);
}

void Plane::setFlightNumber(int number) {
    flight_number = number;
}

const char* Plane::getDeparturePoint() { return departure_point; }
const char* Plane::getDestinationPoint() { return destination_point; }
const char* Plane::getAircraftMake() { return aircraft_make; }
int Plane::getFlightNumber() { return flight_number; }
int Plane::getTotalSeats() { return total_numberOfSeats; }
int Plane::getOccupiedSeats() { return numberOfOccupied_seats; }

void Plane::ticketSales() {
    if (numberOfOccupied_seats < total_numberOfSeats) {
        numberOfOccupied_seats++;
        cout << "Ticket sold. Now occupied: " << numberOfOccupied_seats << endl;
    }
    else {
        cout << "All seats are occupied\n";
    }
}

void Plane::returnTicket() {
    if (numberOfOccupied_seats > 0) {
        numberOfOccupied_seats--;
        cout << "Ticket returned. Now occupied: " << numberOfOccupied_seats << endl;
    }
    else {
        cout << "No tickets to return\n";
    }
}