//---------------------------------------------------------------------------

#include <vcl.h>
#include <ctime>

#pragma hdrstop

#include "UMain.h"
#include "UAbout.h"
#include "clFifteen.h"
#include "UConfig.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMain *FMain;

//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFMain::N8Click(TObject *Sender)
{
//Информация о программе
Application->CreateForm(__classid(TFAbout), &FAbout);
FAbout->ShowModal();

FAbout->Destroying();
}
//---------------------------------------------------------------------------
void __fastcall TFMain::Quite()
{
//Ф-ция завершения работы
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFMain::N9Click(TObject *Sender)
{
//Выход
Quite();
}
//---------------------------------------------------------------------------
void __fastcall TFMain::N3Click(TObject *Sender)
{
//Завершить игру
if ( bGameStart )
	fFftn->EndGame();
}
//---------------------------------------------------------------------------
void __fastcall TFMain::Timer1Timer(TObject *Sender)
{
//Секундомер
iMS++;

if ( iMS >= 10 )
	{
	iMS = 0;
	iS++;
	}
if ( iS >= 59 )
	{
	iS = 0;
	iM++;
	}
if ( iM >= 59 )
	{
	iM = 0;
	iH++;
	}      

asTime = IntToStr(iH) + ":" + IntToStr(iM) + ":" + IntToStr(iS);
//Вывод секундомера в строку состояния
StatusBar1->Panels->Items[0]->Text = asTime;

//перерисовка фишек на игровом поле
if ( bGameStart )
	{
	SpeedButton1->Visible = fFftn->Get(0,0);
	SpeedButton1->Caption = fFftn->Get(0,0);

	SpeedButton2->Visible = fFftn->Get(1,0);
	SpeedButton2->Caption = fFftn->Get(1,0);

	SpeedButton3->Visible = fFftn->Get(2,0);
	SpeedButton3->Caption = fFftn->Get(2,0);

	SpeedButton4->Visible = fFftn->Get(3,0);
	SpeedButton4->Caption = fFftn->Get(3,0);

	SpeedButton5->Visible = fFftn->Get(0,1);
	SpeedButton5->Caption = fFftn->Get(0,1);

	SpeedButton6->Visible = fFftn->Get(1,1);
	SpeedButton6->Caption = fFftn->Get(1,1);

	SpeedButton7->Visible = fFftn->Get(2,1);
	SpeedButton7->Caption = fFftn->Get(2,1);

	SpeedButton8->Visible = fFftn->Get(3,1);
	SpeedButton8->Caption = fFftn->Get(3,1);

	SpeedButton9->Visible = fFftn->Get(0,2);
	SpeedButton9->Caption = fFftn->Get(0,2);

	SpeedButton10->Visible = fFftn->Get(1,2);
	SpeedButton10->Caption = fFftn->Get(1,2);

	SpeedButton11->Visible = fFftn->Get(2,2);
	SpeedButton11->Caption = fFftn->Get(2,2);

	SpeedButton12->Visible = fFftn->Get(3,2);
	SpeedButton12->Caption = fFftn->Get(3,2);

	SpeedButton13->Visible = fFftn->Get(0,3);
	SpeedButton13->Caption = fFftn->Get(0,3);

	SpeedButton14->Visible = fFftn->Get(1,3);
	SpeedButton14->Caption = fFftn->Get(1,3);

	SpeedButton15->Visible = fFftn->Get(2,3);
	SpeedButton15->Caption = fFftn->Get(2,3);

	SpeedButton16->Visible = fFftn->Get(3,3);
	SpeedButton16->Caption = fFftn->Get(3,3);
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::N2Click(TObject *Sender)
{
//Новая ИГРА
iH = 0;
iM = 0;
iS = 0;
iMS = 0;

fFftn->NewGame();

bGameStart = true;
Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFMain::FormCreate(TObject *Sender)
{
fFftn = new clFifteen;

iH = 0;
iM = 0;
iS = 0;
iMS = 0;
iResult = 0;

bGameStart = false;

SpeedButton16->Visible = false;

/*
SpeedButton1->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton2->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton3->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton4->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton5->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton6->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton7->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton8->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton9->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton10->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton11->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton12->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton13->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton14->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton15->Glyph->LoadFromFile("Tag//00.bmp");
SpeedButton16->Glyph->LoadFromFile("Tag//00.bmp");
*/
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton1Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(0,0);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton2Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(1,0);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton3Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(2,0);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton4Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(3,0);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton5Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(0,1);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton6Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(1,1);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton7Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(2,1);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton8Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(3,1);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton9Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(0,2);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton10Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(1,2);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton11Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(2,2);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton12Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(3,2);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton13Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(0,3);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton14Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(1,3);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton15Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(2,3);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton16Click(TObject *Sender)
{
if ( bGameStart )
	{
	iResult = fFftn->Move(3,3);
	WinToGame();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::WinToGame()
{
if ( iResult == 100 )
		{
		Timer1->Enabled = false;
		bGameStart = false;

		SpeedButton1->Visible = fFftn->Get(0,0);
		SpeedButton1->Caption = fFftn->Get(0,0);

		SpeedButton2->Visible = fFftn->Get(1,0);
		SpeedButton2->Caption = fFftn->Get(1,0);

		SpeedButton3->Visible = fFftn->Get(2,0);
		SpeedButton3->Caption = fFftn->Get(2,0);

		SpeedButton4->Visible = fFftn->Get(3,0);
		SpeedButton4->Caption = fFftn->Get(3,0);

		SpeedButton5->Visible = fFftn->Get(0,1);
		SpeedButton5->Caption = fFftn->Get(0,1);

		SpeedButton6->Visible = fFftn->Get(1,1);
		SpeedButton6->Caption = fFftn->Get(1,1);

		SpeedButton7->Visible = fFftn->Get(2,1);
		SpeedButton7->Caption = fFftn->Get(2,1);

		SpeedButton8->Visible = fFftn->Get(3,1);
		SpeedButton8->Caption = fFftn->Get(3,1);

		SpeedButton9->Visible = fFftn->Get(0,2);
		SpeedButton9->Caption = fFftn->Get(0,2);

		SpeedButton10->Visible = fFftn->Get(1,2);
		SpeedButton10->Caption = fFftn->Get(1,2);

		SpeedButton11->Visible = fFftn->Get(2,2);
		SpeedButton11->Caption = fFftn->Get(2,2);

		SpeedButton12->Visible = fFftn->Get(3,2);
		SpeedButton12->Caption = fFftn->Get(3,2);

		SpeedButton13->Visible = fFftn->Get(0,3);
		SpeedButton13->Caption = fFftn->Get(0,3);

		SpeedButton14->Visible = fFftn->Get(1,3);
		SpeedButton14->Caption = fFftn->Get(1,3);

		SpeedButton15->Visible = fFftn->Get(2,3);
		SpeedButton15->Caption = fFftn->Get(2,3);

		SpeedButton16->Visible = fFftn->Get(3,3);
		SpeedButton16->Caption = fFftn->Get(3,3);

		ShowMessage("Поздравляем!!! Вы победили!");
		}
}
//---------------------------------------------------------------------------
void __fastcall TFMain::N5Click(TObject *Sender)
{
//Настройки
Application->CreateForm(__classid(TFConfig), &FConfig);
FConfig->ShowModal();

FConfig->Destroying();
}
//---------------------------------------------------------------------------
void __fastcall TFMain::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if ( Key == VK_F1 )
	//ShellExecute(0, "open", "Help-15.chm", NULL, NULL, SW_SHOWNORMAL);
	ShellExecute(0, "open", "Help-15.chm parametry.htm", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TFMain::N7Click(TObject *Sender)
{
ShellExecute(0, "open", "Help-15.chm", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

