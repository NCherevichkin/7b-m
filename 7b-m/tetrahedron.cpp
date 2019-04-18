#include <fstream>
#include "tetrahedron.h"

using namespace std;

namespace simple_shapes 
{
	// Ввод параметра тетраэдра из потока
	void In(tetrahedron &f, ifstream &ifst)
	{
		ifst >> f.a;
	}
	void Out(tetrahedron &f, ofstream &ofst)
	{
		ofst << "It is Tetraidr: a = "
			<< f.a << endl;
	}
} // end simple_shapes namespace