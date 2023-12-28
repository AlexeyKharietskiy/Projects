#pragma once
#include<iostream>
#include <string>
using namespace std;

	class System {
	protected:
		string name;
		double cost;
	public:
		System(string name) {
			this->name = name;
		}
		System(string name, double cost) :System(name) {
			this->cost = cost;
		}

		virtual double getCost() {
			return cost;
		}
	};

