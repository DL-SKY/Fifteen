//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UConfig.h"
#include "UMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFConfig *FConfig;
//---------------------------------------------------------------------------
__fastcall TFConfig::TFConfig(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFConfig::Button1Click(TObject *Sender)
{
Close();	
}
//---------------------------------------------------------------------------
void __fastcall TFConfig::FormClose(TObject *Sender, TCloseAction &Action)
{
Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TFConfig::FormCreate(TObject *Sender)
{
//Позиция цвета шрифта
if ( FMain->SpeedButton1->Font->Color == clWindowText )
	ComboBox1->ItemIndex = 0;
if ( FMain->SpeedButton1->Font->Color == clHotLight )
	ComboBox1->ItemIndex = 1;
if ( FMain->SpeedButton1->Font->Color == clRed )
	ComboBox1->ItemIndex = 2;
if ( FMain->SpeedButton1->Font->Color == clGreen )
	ComboBox1->ItemIndex = 3;

ComboBox1Change( Sender );

//Позиция размера шрифта
if ( FMain->SpeedButton1->Font->Size == 10 )
	ComboBox2->ItemIndex = 0;
if ( FMain->SpeedButton1->Font->Size == 14 )
	ComboBox2->ItemIndex = 1;
if ( FMain->SpeedButton1->Font->Size == 18 )
	ComboBox2->ItemIndex = 2;
if ( FMain->SpeedButton1->Font->Size == 24 )
	ComboBox2->ItemIndex = 3;

ComboBox2Change( Sender );
}
//---------------------------------------------------------------------------
void __fastcall TFConfig::ComboBox1Change(TObject *Sender)
{
//Меняем цвет
TColor clColor;

switch (ComboBox1->ItemIndex)
	{
	case 0: clColor = clWindowText; break;
	case 1: clColor = clHotLight; 	break;
	case 2: clColor = clRed; 		break;
	case 3: clColor = clGreen; 		break;
	}

SpeedButton1->Font->Color = clColor;
FMain->SpeedButton1->Font->Color = clColor;
FMain->SpeedButton2->Font->Color = clColor;
FMain->SpeedButton3->Font->Color = clColor;
FMain->SpeedButton4->Font->Color = clColor;
FMain->SpeedButton5->Font->Color = clColor;
FMain->SpeedButton6->Font->Color = clColor;
FMain->SpeedButton7->Font->Color = clColor;
FMain->SpeedButton8->Font->Color = clColor;
FMain->SpeedButton9->Font->Color = clColor;
FMain->SpeedButton10->Font->Color = clColor;
FMain->SpeedButton11->Font->Color = clColor;
FMain->SpeedButton12->Font->Color = clColor;
FMain->SpeedButton13->Font->Color = clColor;
FMain->SpeedButton14->Font->Color = clColor;
FMain->SpeedButton15->Font->Color = clColor;
FMain->SpeedButton16->Font->Color = clColor;
}
//---------------------------------------------------------------------------

void __fastcall TFConfig::ComboBox2Change(TObject *Sender)
{
//Меняем размер
int iSize;

switch (ComboBox2->ItemIndex)
	{
	case 0: iSize = 10;	break;
	case 1: iSize = 14; break;
	case 2: iSize = 18; break;
	case 3: iSize = 24; break;
	}

SpeedButton1->Font->Size = iSize;
FMain->SpeedButton1->Font->Size = iSize;
FMain->SpeedButton2->Font->Size = iSize;
FMain->SpeedButton3->Font->Size = iSize;
FMain->SpeedButton4->Font->Size = iSize;
FMain->SpeedButton5->Font->Size = iSize;
FMain->SpeedButton6->Font->Size = iSize;
FMain->SpeedButton7->Font->Size = iSize;
FMain->SpeedButton8->Font->Size = iSize;
FMain->SpeedButton9->Font->Size = iSize;
FMain->SpeedButton10->Font->Size = iSize;
FMain->SpeedButton11->Font->Size = iSize;
FMain->SpeedButton12->Font->Size = iSize;
FMain->SpeedButton13->Font->Size = iSize;
FMain->SpeedButton14->Font->Size = iSize;
FMain->SpeedButton15->Font->Size = iSize;
FMain->SpeedButton16->Font->Size = iSize;
}
//---------------------------------------------------------------------------
void __fastcall TFConfig::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if ( Key == VK_F1 )
	ShellExecute(0, "open", "Help-15.chm", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TFConfig::ComboBox1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if ( Key == VK_F1 )
	ShellExecute(0, "open", "Help-15.chm", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TFConfig::ComboBox2KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if ( Key == VK_F1 )
	ShellExecute(0, "open", "Help-15.chm", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

