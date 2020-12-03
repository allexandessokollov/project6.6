//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

const int maxMatrixSize = 7;

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

    for(int i = 1; i < cCount; i++)
    {
         AnsiString  strN = "n = ";
         strN += IntToStr(i);

         matrix->Cells[i][0] = strN;
    }

    for(int i = 1; i < rCount; i++)
    {
         AnsiString  strM = "m = ";
         strM += IntToStr(i);

         matrix->Cells[0][i] = strM;
    }

          

    
}
//---------------------------------------------------------------------------



bool TForm1::isStringGridFilled(int colCount, int rowCount)
{
    bool ret = true;
    int max, min;

    if(colCount > rowCount)
    {
        max = colCount;
        min = rowCount;
    }
    else
    {
        max = rowCount;
        min = colCount;
    }

    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < min; j++)
        {
            AnsiString str = matrix->Cells[i][j];
            if(str == "")
            {
                return false;
            }
        }
    }

    return ret;
}
void __fastcall TForm1::changeSizeClick(TObject *Sender)
{
    AnsiString nValue = nSize->Text;
    AnsiString mValue = mSize->Text;

    int cCount, rCount;
    cCount =  StrToInt(nValue);
    rCount =  StrToInt(mValue);

    if(nValue == "" || mValue == "")
    {
        matrix->ColCount = 0;
        matrix->RowCount = 0;
    }
    else if (cCount > maxMatrixSize || rCount > maxMatrixSize)
    {
        ShowMessage("maximum size is 7 x 7");
        nSize->Text = "7";
        mSize->Text = "7";

        matrix->ColCount = StrToInt(maxMatrixSize);
        matrix->RowCount = StrToInt(maxMatrixSize);
    }
    else
    {
        matrix->ColCount = StrToInt(nValue);
        matrix->RowCount = StrToInt(mValue);
    }

    for(int i = 1; i < cCount; i++)
    {
         AnsiString  strN = "n = ";
         strN += IntToStr(i);

         matrix->Cells[i][0] = strN;
    }

    for(int i = 1; i < rCount; i++)
    {
         AnsiString  strM = "m = ";
         strM += IntToStr(i);

         matrix->Cells[0][i] = strM;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::fillMatrixClick(TObject *Sender)
{
    int rCount, cCount;
    rCount = matrix->RowCount;
    cCount = matrix->ColCount;

    for(int i = 1; i < cCount; i++)
    {
        for(int j = 1; j < rCount; j++)
        {
            matrix->Cells[i][j] = random(20) - 10;
        }
    }


}
//---------------------------------------------------------------------------

