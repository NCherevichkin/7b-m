#ifndef CONTAINER_H
#define CONTAINER_H

namespace simple_shapes 
{
	struct shape;
	// ѕростейший контейнер на основе одномерного массива
	struct container
	{
		//const int max_len=100; //максимальна€ длина
		enum { max_len = 100 };
		int len; // текуща€ длина
		shape *cont[max_len];
	};
}
#endif