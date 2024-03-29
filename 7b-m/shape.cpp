#include <fstream>
#include "shape.h"

using namespace std;

namespace simple_shapes 
{
	// ��������� ��������� ������� ������� 
	void In(box &r, ifstream &ist);
	void In(sphere  &t, ifstream &ist);
	void In(tetrahedron  &f, ifstream &ist);

	// ���� ���������� ���������� ������ �� �����
	shape* In(ifstream &ifst)
	{
		shape *sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new shape;
			sp->k = shape::key::BOX;
			In(sp->r, ifst);
			return sp;
		case 2:
			sp = new shape;
			sp->k = shape::key::SPHERE;
			In(sp->t, ifst);
			return sp;
		case 3:
			sp = new shape;
			sp->k = shape::key::TETRAHEDRON;
			In(sp->f, ifst);
			return sp;
		default:
			return 0;
		}
	}

	void Out(box &r, ofstream &ofst);
	void Out(sphere  &t, ofstream &ofst);
	void Out(tetrahedron  &f, ofstream &ofst);

	// ����� ���������� ������� ������ � �����
	void Out(shape &s, ofstream &ofst) {
		switch (s.k) {
		case shape::key::BOX:
			Out(s.r, ofst);
			break;
		case shape::key::SPHERE:
			Out(s.t, ofst);
			break;
		case shape::key::TETRAHEDRON:
			Out(s.f, ofst);
			break;
		default:
			ofst << "Incorrect figure!" << endl;
		}
	}
} // end simple_shapes namespace


