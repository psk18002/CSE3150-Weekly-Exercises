#include "WE10.h"

int main () {

    Hybrid hybrid("Elantra");
    hybrid.Start();
    cout << "The name of the hybrid vehicle: " << hybrid.getName() << endl;
    cout << "The cost of fuel (per gallon): " << hybrid.costOfFuel() << endl;
    cout << "The cost of a 40-mile trip (hybrid model): " << hybrid.costOfTrip(40.0) << endl;
    cout << "The cost of a 40-mile trip (gasoline model): " << hybrid.Gasoline::costOfTrip(100.0) << endl;
    cout << "The cost of a 40-mile trip (electric model): " << hybrid.Electric::costOfTrip(100.0) << endl;
    hybrid.Stop();

    return 0;
}