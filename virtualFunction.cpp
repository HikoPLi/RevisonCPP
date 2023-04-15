#include <iosstream>
using namespace std;

void Vehicle::outputInfo()
{
    cout << "A vehicle" << endl;
}
void MotorVehicle::outputInfo()
{
    cout << "A motor vehicle" << endl;
    cout << "Car no: " << carNum;
}
void PrivateCar::outputInfo()
{
    MotorVehicle::outputInfo();
    cout << "\nA private car" << endl;
    cout << numSeats << " seats" << endl;
}
void Truck::outputInfo()
{
    MotorVehicle::outputInfo();
    cout << "\nA truck" << endl;
    cout << maxLoad << " kg maximum load"
         << endl;
}
void Bus::outputInfo()
{
    MotorVehicle::outputInfo();
    cout << "\nA bus" << endl;
    cout << numPassengers
         << " passengers" << endl;
   cout << (hasAirCond ?
}
"Has air-conditioning\n" : "");
void MiniBus::extraInfo()
{
   cout << "(A minibus with seat belts)"
        << endl;
}

// These are the implementations of the virtual function outputInfo() in various derived classes of Vehicle,
//  except for MiniBus which implements its own non-virtual function extraInfo().