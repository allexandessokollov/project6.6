//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *nSize;
        TEdit *mSize;
        TLabel *Label1;
        TLabel *Label2;
        TStringGrid *matrix;
        TButton *changeSize;
        TButton *fillMatrix;
        TLabel *Label3;
        TButton *getAnswer;
        TButton *fillZero;
        TLabel *answer;
        void __fastcall changeSizeClick(TObject *Sender);
        void __fastcall fillMatrixClick(TObject *Sender);
        void __fastcall getAnswerClick(TObject *Sender);
        void __fastcall fillZeroClick(TObject *Sender);
private:
        bool isStringGridFilled(int colCount, int rowCount);
        bool alreadyExist(int arr[],int  arrSize, int value);	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
