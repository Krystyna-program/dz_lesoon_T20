#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Plane {
    int flight_number;
    char* departure_point;
    char* destination_point;
    char* aircraft_make;
    int total_numberOfSeats;
    int numberOfOccupied_seats;

public:
    Plane();
    Plane(const char* departure_point, int flight_number, const char* destination_point, const char* aircraft_make, int totalSeats, int occupiedSeats);
    ~Plane();

    void showInfo();

    void setDeparturePoint(const char* point);
    void setDestinationPoint(const char* point);
    void setAircraftMake(const char* make);
    void setFlightNumber(int number);

    const char* getDeparturePoint();
    const char* getDestinationPoint();
    const char* getAircraftMake();
    int getFlightNumber();
    int getTotalSeats();
    int getOccupiedSeats();

    void ticketSales();
    void returnTicket();
};