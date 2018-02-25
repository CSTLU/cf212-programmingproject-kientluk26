#include "Linked_List.h"
void main()
{
	List ds;

	// Chay random n so
	//int N;
	//cout << "Nhap n: ";
	//cin >> N;
	//for (int i = 0; i < N; i++)
	//{
	//	ds.AddLast((rand() % (N + 1)));
	//}

	// Them truc tiep so can sap xep
	ds.AddFirst(2);
	ds.AddLast(9);
	ds.AddLast(7);
	ds.InsertPos(6, 3);
	ds.AddLast(5);
	ds.AddLast(1);
	ds.AddLast(0);
	ds.AddLast(10);
	ds.Inra();
	cout << "\n";

	ds.QuickSort();
	ds.Inra();
	cout << "\n";
}