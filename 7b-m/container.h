#ifndef CONTAINER_H
#define CONTAINER_H

namespace simple_shapes 
{
	struct shape;
	// ���������� ��������� �� ������ ����������� �������
	struct container
	{
		//const int max_len=100; //������������ �����
		enum { max_len = 100 };
		int len; // ������� �����
		shape *cont[max_len];
	};
}
#endif