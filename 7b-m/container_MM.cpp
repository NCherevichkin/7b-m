#include <fstream>

#include "container.h"
#include "shape.h"

using namespace std;

namespace simple_shapes 
{
	// Сигнатуры требуемых
	void Out(shape &s, ofstream &ofst);
	
	// Мультиметод
	void MultiMethod(container &c, ofstream &ofst) 
	{
		ofst << "Multimethod." << endl;
		for (int i = 0; i < c.len - 1; i++) 
		{
			for (int j = i + 1; j < c.len; j++) 
			{
				switch (c.cont[i]->k) 
				{
				case shape::BOX:
					switch (c.cont[j]->k) 
					{
					case shape::BOX:
						ofst << "Box and box." << endl;
						break;
					case shape::SPHERE:
						ofst << "Box and share." << endl;
						break;
					case shape::TETRAHEDRON:
						ofst << "Box and Tetraidr." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
					break;
				case shape::SPHERE:
					switch (c.cont[j]->k) 
					{
					case shape::BOX:
						ofst << "Share and box." << endl;
						break;
					case shape::SPHERE:
						ofst << "Share and Share." << endl;
						break;
					case shape::TETRAHEDRON:
						ofst << "Share and Tetraidr." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
					break;
				case shape::TETRAHEDRON:
					switch (c.cont[j]->k) 
					{
					case shape::BOX:
						ofst << "Tetraidr and Box." << endl;
						break;
					case shape::SPHERE:
						ofst << "Tetraidr and Share." << endl;
						break;
					case shape::TETRAHEDRON:
						ofst << "Tetraidr and Tetraidr." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
				default:
					ofst << "Unknown type" << endl;
				}
				Out(*(c.cont[i]), ofst);
				Out(*(c.cont[j]), ofst);
			}
		}
	}
}