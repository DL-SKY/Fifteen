//---------------------------------------------------------------------------

#ifndef UConfigH
#define UConfigH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TFConfig : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TComboBox *ComboBox1;
	TButton *Button1;
	TLabel *Label2;
	TComboBox *ComboBox2;
	TSpeedButton *SpeedButton1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall ComboBox2Change(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ComboBox1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
	void __fastcall ComboBox2KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall TFConfig(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFConfig *FConfig;
//---------------------------------------------------------------------------
#endif
