//---------------------------------------------------------------------------
#include "clFifteen.h"

/*---------------------------------------------------------------------------
==== ����� �������� "Fifteen" ====
---------------------------------------------------------------------------*/

//!!!!!!!!!!!!!!!!!!!!!! ���������� � ������������ !!!!!!!!!!!!!!!!!!!!!!!!!
//---------------------------------------------------------------------------
Fifteen::Fifteen()
{
//������������� �����������������
srand( time(NULL) );
//������������� ������� �������� ���� "��������"
MatrixNull();
}
//---------------------------------------------------------------------------
Fifteen::~Fifteen()
{
//������� ������
delete iFftn;
}
//---------------------------------------------------------------------------
//!!!!!!!!!!!!!!!!!!!!!!!! SET-�������-����� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//---------------------------------------------------------------------------
int Fifteen::Set( int _i, int _j, int _n )
{
//�������� ����������
if ( 0 <= _n <= 15 )
	return 101;
if ( 0 <= _i <= 3 )
	return 101;
if ( 0 <= _j <= 3 )
	return 101;

iFftn[_i][_j] = _n;	

//���� ��� ������, ���������� 0
return 0;
}
//---------------------------------------------------------------------------
//!!!!!!!!!!!!!!!!!!!!!!!! GET-�������-����� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//---------------------------------------------------------------------------
int Fifteen::Get( int _i, int _j )
{
int n = -1;

if ( (0 <= _i <= 3) && (0 <= _j <= 3) )
	n = iFftn[_i][_j];
else
	n = 101;

//���� ���� ������, ���������� 101
return n;
}
//---------------------------------------------------------------------------
//!!!!!!!!!!!!!!!!!!!!!!!!!!! ������ ������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//---------------------------------------------------------------------------
void Fifteen::MatrixNull()
{
//����������� �������� -1 ���� ������� �������� ����
//�.�. �������� "1"-"15" ����� ���������� �����, � "0" ��������� ������
for ( int i = 0; i < 4; i++ )
	for ( int j = 0; j < 4; j++ )
		iFftn[i][j] = -1;
}
//---------------------------------------------------------------------------
void Fifteen::MatrixRandom()
{
MatrixNull();
int i, j;	//��������������� ���������� ��� �������� ������� �������� ����
bool bUseN;	//����������-���� ������������� ����� "n"
i = 0;
j = 0;

for ( int n = 0; n <= 16; n++ )
	{
	//����� "n" ��� �� ������������
	bUseN = false;
	//�������� ��������� ����� �� ������� ����
	i = rand() % 4;
	j = rand() % 4;
		
		//���� �������� ��������� ����� �� ������������ (�� ������ �������� ��� ������), �� ������ ����� "n" �� ��������� ������
		if ( iFftn[i][j] == -1 )
			iFftn[i][j] = n;
		//���� �� ������ ������������, � ����� ���� ������ ���������
		else 
			for ( int I = 0; I < 4; I++ )
				{
				for ( int J = 0; J < 4; J++ )
					{
					//���� ����� �� ���� �������� - ������ ����� � ����������� ���� "n-������������"
					if ( iFftn[I][J] == -1 )
						{
						iFftn[I][J] = n;
						bUseN = true;
						break;
						}
					}
				//���� ����� ������������, �� ������� �� ����� ������ ������ ��������� ������
				if (bUseN)
					break;
				}
	}
}
//---------------------------------------------------------------------------
int Fifteen::NewGame()
{
MatrixRandom();

//���� ��� ������, ���������� 0
return 0;
}
//---------------------------------------------------------------------------
int Fifteen::EndGame()
{
//���� ��� ������, ���������� 0
return 0;
}
//---------------------------------------------------------------------------
int Fifteen::Move( int _i, int _j )
{
//�������� ����������
if ( 0 <= _i <= 3 )
	return 101;
if ( 0 <= _j <= 3 )
	return 101;

if ( iFftn[_i][_j] == 0 )
	return 102;
	
//�������� �������� ������ ������������ [_i][_j]
//�� ������� ������ ������.
if ( _i-1 >= 0 )
	{
	if ( iFftn[_i-1][_j] == 0 )
		{
		iFftn[_i-1][_j] = iFftn[_i][_j];
		iFftn[_i][_j] = 0;
		}
	}
if ( _i+1 <= 3 )
	{
	if ( iFftn[_i+1][_j] == 0 )
		{
		iFftn[_i+1][_j] = iFftn[_i][_j];
		iFftn[_i][_j] = 0;
		}
	}
if ( _j-1 >= 0 )
	{
	if ( iFftn[_i][_j-1] == 0 )
		{
		iFftn[_i][_j-1] = iFftn[_i][_j];
		iFftn[_i][_j] = 0;
		}
	}
if ( _j+1 <= 3 )
	{
	if ( iFftn[_i][_j+1] == 0 )
		{
		iFftn[_i][_j+1] = iFftn[_i][_j];
		iFftn[_i][_j] = 0;
		}
	}

//�������� �� ������
if ( iFftn[0][0] == 1 )
	if ( iFftn[1][0] == 2 && iFftn[2][0] == 3 && iFftn[3][0] == 4 )
		if ( iFftn[0][1] == 5 && iFftn[1][1] == 6 && iFftn[2][1] == 7 && iFftn[3][1] == 8 )
			if ( iFftn[0][2] == 9 && iFftn[1][2] == 10 && iFftn[2][2] == 11 && iFftn[3][2] == 12 )
				if ( iFftn[0][3] == 13 && iFftn[1][3] == 14 && iFftn[2][3] == 15 && iFftn[3][3] == 0 )
					return 100;
	
//���� ��� ������ � ��� ������, ���������� 0
return 0;
}
//---------------------------------------------------------------------------

