﻿//-----------------------------------------------------------------------------
// File: main.cpp
// Auth: SnipGhost
//                                                              Главная функция
//-----------------------------------------------------------------------------
#include "config.h"
#include "dbtable.h"
//-----------------------------------------------------------------------------
int main()
{
	system("chcp 1251 > nul");
	readConfig("config.txt");
	DBTable *t = new DBTable("table.txt");
	t->printTable();
	// EXAMPLE #1 - печать значения //
	t->printValue(2, "Name");
	cout << endl;
	// EXAMPLE #2 - удаление записи //
	t->removeRow(2);
	t->printTable();
	// EXAMPLE #3 - поиск и удаление //
	int i = t->findRow("Mark", "4.6");
	if (i >= 0) t->removeRow(i);
	t->printTable();
	// Удаление всей таблицы //
	delete t;
	system("pause");
	return 0;
}
//-----------------------------------------------------------------------------