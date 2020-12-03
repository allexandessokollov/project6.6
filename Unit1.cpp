//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

const int maxM = 7;
const int maxN = 7;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
    int cCount, rCount;
    cCount = StrToInt(nSize->Text);
    rCount = StrToInt(mSize->Text);

    matrix->ColCount = cCount;
    matrix->RowCount = rCount;

    matrix->Cells[0][0] = "matrix";

    for(int i = 1; i < matrix->ColCount; i++)
    {
         AnsiString  strN = "n = ";
         strN += IntToStr(i);

         matrix->Cells[i][0] = strN;

         AnsiString  strM = "m = ";
         strM += IntToStr(i);

         matrix->Cells[0][i] = strM;
    }



    
}
//---------------------------------------------------------------------------

