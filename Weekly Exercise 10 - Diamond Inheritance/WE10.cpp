#include "WE10.h"

double Gasoline::gasolineMilesPerDollar() {

    return (1.00 / Gasoline::costOfFuel());
}
double Electric::electricMilesPerDollar() {

	return (1.00 / Electric::costOfFuel());
}

double Hybrid::getPG() {
	return _percentGas;
}
void Hybrid::setPG(double pg) {
	_percentGas = pg;
}
string Hybrid::getName() { return name; }
double Electric::costOfTrip(double miles) { return (miles/mpge) * Electric::costOfFuel(); }
double Gasoline::costOfTrip(double miles) { return (miles/mpg) * Gasoline::costOfFuel(); }
double Hybrid::costOfTrip(double miles) { return (miles/mpg) * Hybrid::costOfFuel(); }
