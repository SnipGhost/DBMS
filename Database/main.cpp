﻿//-----------------------------------------------------------------------------
// File: main.cpp
// Auth: SnipGhost
//                                                              Главная функция
//-----------------------------------------------------------------------------
#include "dbtable.h"
//-----------------------------------------------------------------------------
int main()
{
	system("chcp 1251 > nul");
	DBTable *t = new DBTable("table.txt");
	t->printTable();
	delete t;
	system("pause");
	return 0;
}
//-----------------------------------------------------------------------------