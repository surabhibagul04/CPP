/*
CO1 (4 Marks): Create a base class Hospital with protected members: hospitalID,
hospitalName, location. Include a static member hospitalCount. Provide methods
registerHospital(), display(), and static function showHospitals().
CO2 (4 Marks): Implement a parameterized constructor for Hospital. Add a destructor
displaying "Hospital record removed: <name>". Overload + operator to add number of
beds.
CO3 (4 Marks): Derive a class Patient publicly from Hospital adding patientID, disease,
admissionDate, and doctorAssigned. Provide functions to accept and display patient
details along with hospital information. Add a method dischargePatient() specific to the
*/

#include <iostream>
using namespace std;

class Hospital {
protected:
    int hospitalID;
    string hospitalName;
    string location;
    int beds;

public:
    static int hospitalCount;

    // Parameterized constructor
    Hospital(int id, string name, string loc, int b) {
        hospitalID = id;
        hospitalName = name;
        location = loc;
        beds = b;
        hospitalCount++;
    }

    // Destructor
    ~Hospital() {
        cout << "Hospital record removed: " << hospitalName << endl;
    }

    void registerHospital() {
        cout << "Enter Hospital ID: ";
        cin >> hospitalID;
        cout << "Enter Hospital Name: ";
        cin >> hospitalName;
        cout << "Enter Location: ";
        cin >> location;
        cout << "Enter Beds: ";
        cin >> beds;
    }

    void display() {
        cout << "\nHospital ID: " << hospitalID << endl;
        cout << "Hospital Name: " << hospitalName << endl;
        cout << "Location: " << location << endl;
        cout << "Beds: " << beds << endl;
    }

    static void showHospitals() {
        cout << "Total Hospitals Registered: " << hospitalCount << endl;
    }

    // Fixed operator +
    Hospital& operator+(int extraBeds) {
        beds = beds + extraBeds;
        return *this;
    }
};

int Hospital::hospitalCount = 0;

class Patient : public Hospital {
    int patientID;
    string disease;
    string admissionDate;
    string doctorAssigned;

public:
    Patient(int id, string name, string loc, int b)
        : Hospital(id, name, loc, b) {}

    void acceptPatient() {
        cout << "Enter Patient ID: ";
        cin >> patientID;
        cout << "Enter Disease: ";
        cin >> disease;
        cout << "Enter Admission Date: ";
        cin >> admissionDate;
        cout << "Enter Doctor Assigned: ";
        cin >> doctorAssigned;
    }

    void displayPatient() {
        display();
        cout << "Patient ID: " << patientID << endl;
        cout << "Disease: " << disease << endl;
        cout << "Admission Date: " << admissionDate << endl;
        cout << "Doctor Assigned: " << doctorAssigned << endl;
    }

    void dischargePatient() {
        cout << "Patient " << patientID << " discharged successfully." << endl;
    }
};

int main() {

    Patient p1(101, "CityHospital", "Pune", 50);

    p1.acceptPatient();
    p1.displayPatient();

    p1 + 10;   // add beds

    cout << "\nAfter adding beds:\n";
    p1.display();

    Hospital::showHospitals();

    p1.dischargePatient();

    return 0;
}





