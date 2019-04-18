#ifndef SHAPE_H
#define SHAPE_H

#include "box.h"
#include "sphere.h"
#include "tetrahedron.h"

namespace simple_shapes 
{
	// ���������, ���������� ��� ��������� ������
	struct shape {
		// �������� ������ ��� ������ �� �����
		enum key { BOX, SPHERE, TETRAHEDRON };
		key k; // ����
		union 
		{ 
			box r;
			sphere t;
			tetrahedron f;
		};
	};
} // end simple_shapes namespace
#endif
