#include <fstream>
#include "sphere.h"

using namespace std;

namespace simple_shapes 
{
	// ¬вод параметра шара из потока
	void In(sphere &t, ifstream &ifst)
	{
		ifst >> t.rad;
	}
	void Out(sphere &t, ofstream &ofst)
	{
		ofst << "It is Sphere: r = "
			<< t.rad << endl;
	}
} // end simple_shapes namespace

