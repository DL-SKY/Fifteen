#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//---------------------------------------------------------------------------
#ifndef clFifteenH
#define clFifteenH
//---------------------------------------------------------------------------
class clFifteen
{
//�������� �������-����� � ������-�����
//���������� �� ��������� ������
private:
	//������-�����
	//"set" �������-�����
	//"get" �������-�����
	//������ �������-�����

//���������� �������-����� � ������-�����
//�������� � ����������� ������
protected:
	//������-�����
	//int **iFftn;		//������� ���� "��������"
	int iFftn[4][4];		//������� ���� "��������"

	//"set" �������-�����
	//"get" �������-�����   
	//������ �������-�����
	void MatrixNull();		//�-��� "���������" ������� - ([i][j] = -1)

//�������� �������-����� � ������-�����
//�������� �����
public:
	//���������� � ������������
	clFifteen(void);
	~clFifteen(void);
	
	//������-�����
	//"set" �������-�����
	int Set( int _i, int _j, int _n );	//�-��� ������������ �������� ������������ �����
	
	//"get" �������-�����
	int Get( int _i, int _j );	//�-��� ����������� �������� ���������� �������� �������

	//������ �������-�����
	void MatrixRandom();		//�-��� ���������� ���������� ����� �� ������� ���� 
	int NewGame();				//�-��� ������ ����
	int EndGame();				//�-��� ���������� ����
	int Move( int _i, int _j );	//�-��� ����������� �����-�������� 
};
//---------------------------------------------------------------------------
#endif