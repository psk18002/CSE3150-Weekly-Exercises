#ifndef _WE10_H
#define _WE10_H

#include <iostream>
#include <string>

using namespace std;


class Vehicle {
	protected:
		double weight;
		string name;

	public:
		Vehicle() { cout << "Constructor: Vehicle" << endl; }
		Vehicle(double weight, string name) : weight(weight), name(name) { cout << "Constructor: Vehicle" << endl; }
		
		~Vehicle() {
			cout << "destructor: Vehicle" << endl;
		}
		virtual void Start() { cout << "Vehicle START"  << endl; }
		virtual void Stop() { cout << "Vehicle STOP"  << endl; }
		virtual double costOfFuel() { return 0; }
};

class Gasoline : public virtual Vehicle {
		double _costOfFuel;
	public:
		double mpg = 32;

		void setMPG(double MPG) { mpg = MPG; }
		double getMPG() { return mpg; }

		Gasoline(int weight, string name, double COF) : _costOfFuel(COF), Vehicle(weight, name) {
			cout << "Constructor: Gasoline" << endl;
		}
		~Gasoline() {
			cout << "destructor: Gasoline" << endl;
		}

		double gasolineMilesPerDollar();
		double costOfFuel() override { return _costOfFuel; }
		void setCOF(double COF) { _costOfFuel = COF; }
		double costOfTrip(double miles);
};

class Electric : public virtual Vehicle {
		double _costOfFuel;
	public:
		double mpge = 106;

		void setMPGE(double MPGE) { mpge = MPGE; }
		double getMPGE() { return mpge; }

		Electric(int weight, string name, double COF) : _costOfFuel(COF), Vehicle(weight, name) {
			cout << "Constructor: Electric" << endl;
		}
		~Electric() {
			cout << "destructor: Electric" << endl;
		}

		double electricMilesPerDollar();
		double costOfFuel() override { return _costOfFuel; }
		void setCOF(double COF) { _costOfFuel = COF; }
		double costOfTrip(double miles);

};

class Hybrid : public Electric, public Gasoline {

	private:
		double _percentGas = 0.8;
		string name;

	public:
		double mpg = 44;
		void setMPG(double MPG) { mpg = MPG; }
		double getMPG() { return mpg; }

		Hybrid(string name) : name(name), Electric(20, name, 0.24), Gasoline(20, name, 3.44) {
			cout << "Constructor: Hybrid" << endl;
		}
		~Hybrid() {
			cout << "destructor: Hybrid" << endl;
		}

		double getPG();
		void setPG(double pg);
		double costOfFuel() override { return (Gasoline::costOfFuel() * getPG()) + (Electric::costOfFuel() * (1 - getPG())); }
		string getName();

		void Start() override { cout << "Hybrid START"  << endl; }
		void Stop() override { cout << "Hybrid STOP"  << endl; }
		double costOfTrip(double miles);

};

#endif