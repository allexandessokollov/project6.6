object Form1: TForm1
  Left = 180
  Top = 190
  Width = 789
  Height = 312
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Trebuchet MS'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 24
  object Label1: TLabel
    Left = 8
    Top = 24
    Width = 106
    Height = 24
    Caption = 'Matrix Sise: '
  end
  object Label2: TLabel
    Left = 8
    Top = 56
    Width = 48
    Height = 24
    Caption = 'N x M'
  end
  object Label3: TLabel
    Left = 544
    Top = 72
    Width = 93
    Height = 24
    Caption = 'Answer is: '
  end
  object answer: TLabel
    Left = 648
    Top = 72
    Width = 6
    Height = 24
  end
  object nSize: TEdit
    Left = 120
    Top = 24
    Width = 41
    Height = 32
    TabOrder = 0
    Text = '3'
  end
  object mSize: TEdit
    Left = 120
    Top = 64
    Width = 41
    Height = 32
    TabOrder = 1
    Text = '3'
  end
  object matrix: TStringGrid
    Left = 184
    Top = 24
    Width = 337
    Height = 209
    DefaultColWidth = 40
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Trebuchet MS'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ParentFont = False
    TabOrder = 2
  end
  object changeSize: TButton
    Left = 8
    Top = 120
    Width = 153
    Height = 33
    Caption = 'Change Size'
    TabOrder = 3
    OnClick = changeSizeClick
  end
  object fillMatrix: TButton
    Left = 8
    Top = 168
    Width = 153
    Height = 33
    Caption = 'Fill matrix'
    TabOrder = 4
    OnClick = fillMatrixClick
  end
  object getAnswer: TButton
    Left = 544
    Top = 24
    Width = 145
    Height = 33
    Caption = 'get answer'
    TabOrder = 5
    OnClick = getAnswerClick
  end
  object fillZero: TButton
    Left = 8
    Top = 208
    Width = 153
    Height = 33
    Caption = 'fill 0'
    TabOrder = 6
    OnClick = fillZeroClick
  end
end
