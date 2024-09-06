#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Seat {
private:
    int seatNumber;
    bool isBooked;

public:
    Seat(int number) : seatNumber(number), isBooked(false) {}

    int getSeatNumber() const {
        return seatNumber;
    }

    bool isAvailable() const {
        return !isBooked;
    }

    void book() {
        isBooked = true;
    }

    void cancelBooking() {
        isBooked = false;
    }
};

class Bus {
private:
    string busNumber;
    vector<Seat> seats;

public:
    Bus(const string& number, int totalSeats) : busNumber(number) {
        for (int i = 1; i <= totalSeats; ++i) {
            seats.push_back(Seat(i));
        }
    }

    const string& getBusNumber() const {
        return busNumber;
    }

    const vector<Seat>& getAvailableSeats() const {
        static vector<Seat> availableSeats;
        availableSeats.clear();
        for (const auto& seat : seats) {
            if (seat.isAvailable()) {
                availableSeats.push_back(seat);
            }
        }
        return availableSeats;
    }

    bool bookSeat(int seatNumber) {
        for (auto& seat : seats) {
            if (seat.getSeatNumber() == seatNumber && seat.isAvailable()) {
                seat.book();
                return true;
            }
        }
        return false;
    }

    bool cancelBooking(int seatNumber) {
        for (auto& seat : seats) {
            if (seat.getSeatNumber() == seatNumber && !seat.isAvailable()) {
                seat.cancelBooking();
                return true;
            }
        }
        return false;
    }
};

class ReservationSystem {
private:
    vector<Bus> buses;

public:
    void addBus(const string& busNumber, int totalSeats) {
        buses.emplace_back(busNumber, totalSeats);
    }

    const vector<Seat>& getAvailableSeats(const string& busNumber) const {
        static vector<Seat> emptySeats;
        for (const auto& bus : buses) {
            if (bus.getBusNumber() == busNumber) {
                return bus.getAvailableSeats();
            }
        }
        return emptySeats;
    }

    bool bookSeat(const string& busNumber, int seatNumber) {
        for (auto& bus : buses) {
            if (bus.getBusNumber() == busNumber) {
                return bus.bookSeat(seatNumber);
            }
        }
        return false;
    }

    bool cancelBooking(const string& busNumber, int seatNumber) {
        for (auto& bus : buses) {
            if (bus.getBusNumber() == busNumber) {
                return bus.cancelBooking(seatNumber);
            }
        }
        return false;
    }
};

int main() {
    ReservationSystem reservationSystem;

    // Adding buses
    reservationSystem.addBus("BUS001", 20);
    reservationSystem.addBus("BUS002", 30);

    // Booking seats
    reservationSystem.bookSeat("BUS001", 5);
    reservationSystem.bookSeat("BUS001", 7);
    reservationSystem.bookSeat("BUS002", 10);

    // Getting available seats
    cout << "Available seats in BUS001: ";
    const auto& availableSeatsBus1 = reservationSystem.getAvailableSeats("BUS001");
    for (const auto& seat : availableSeatsBus1) {
        cout << seat.getSeatNumber() << " ";
    }
    cout << endl;

    cout << "Available seats in BUS002: ";
    const auto& availableSeatsBus2 = reservationSystem.getAvailableSeats("BUS002");
    for (const auto& seat : availableSeatsBus2) {
        cout << seat.getSeatNumber() << " ";
    }
    cout << endl;

    // Canceling booking
    reservationSystem.cancelBooking("BUS001", 5);

    // Getting available seats after cancellation
    cout << "Available seats in BUS001 after cancellation: ";
    const auto& availableSeatsBus1AfterCancellation = reservationSystem.getAvailableSeats("BUS001");
    for (const auto& seat : availableSeatsBus1AfterCancellation) {
        cout << seat.getSeatNumber() << " ";
    }
    cout << endl;

    return 0;
}
