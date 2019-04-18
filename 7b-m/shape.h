#ifndef SHAPE_H
#define SHAPE_H

#include "box.h"
#include "sphere.h"
#include "tetrahedron.h"

namespace simple_shapes 
{
	// структура, обобщающая все имеющиеся фигуры
	struct shape {
		// значения ключей для каждой из фигур
		enum key { BOX, SPHERE, TETRAHEDRON };
		key k; // ключ
		union 
		{ 
			box r;
			sphere t;
			tetrahedron f;
		};
	};
} // end simple_shapes namespace
#endif
