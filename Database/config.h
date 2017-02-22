//-----------------------------------------------------------------------------
// File: config.h
// Auth: SnipGhost
//                                                 ��������������� ������� ����
//-----------------------------------------------------------------------------
#ifndef CONFIG_H 
#define CONFIG_H
//-----------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS // ��..�������� ��� �������� ����� ������� MS
//-----------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <map>
//-----------------------------------------------------------------------------
using namespace std;
//-----------------------------------------------------------------------------
#define DEBUG_CRIT 1 // ����� ����������� ���������
#define DEBUG_WARN 1 // ����� ��������������
#define DEBUG_NORM 1 // ����� ��������� �� ������
//-----------------------------------------------------------------------------
const int MAX_LINE = 255;       // ������������ ����� ������ ������������ �����
//-----------------------------------------------------------------------------
extern map<string, int> typeCodes;  // ���� ������������������ �����
extern char *STD_DELIMS;            // ����������� �� ���������
//-----------------------------------------------------------------------------
void showMsg(int type, string msg); // ���������� ���������� ���������
void readConfig(string path);       // ��������� ������ ������������
//-----------------------------------------------------------------------------
#endif /* CONFIG_H */
//-----------------------------------------------------------------------------