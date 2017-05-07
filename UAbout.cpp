//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UAbout.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAbout *FAbout;
//---------------------------------------------------------------------------
__fastcall TFAbout::TFAbout(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFAbout::FormClose(TObject *Sender, TCloseAction &Action)
{
Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TFAbout::Button1Click(TObject *Sender)
{
Close();	
}
//---------------------------------------------------------------------------
void __fastcall TFAbout::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if ( Key == VK_F1 )
	ShellExecute(0, "open", "Help-15.chm", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

