object FAbout: TFAbout
  Left = 0
  Top = 0
  HelpType = htKeyword
  BorderStyle = bsToolWindow
  Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
  ClientHeight = 223
  ClientWidth = 396
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poMainFormCenter
  ShowHint = True
  OnClose = FormClose
  OnKeyDown = FormKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 330
    Top = 8
    Width = 58
    Height = 13
    Caption = #1042#1077#1088#1089#1080#1103': 1.0'
  end
  object Button1: TButton
    Left = 313
    Top = 190
    Width = 75
    Height = 25
    Hint = #1047#1072#1082#1088#1099#1090#1100
    Caption = 'Ok'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 299
    Height = 207
    Lines.Strings = (
      #1048#1075#1088#1072' "'#1055#1103#1090#1085#1072#1096#1082#1080'"'
      #1042#1077#1088#1089#1080#1103' 1.0'
      '-------------------------------------'
      #1042#1072#1088#1080#1072#1085#1090' '#8470'6'
      #1050#1086#1085#1090#1088#1086#1083#1100#1085#1072#1103' '#1088#1072#1073#1086#1090#1072' '#8470'2'
      #1055#1088#1086#1077#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077' '#1095#1077#1083#1086#1074#1077#1082#1086'-'#1084#1072#1096#1080#1085#1085#1086#1075#1086' '
      #1080#1085#1090#1077#1088#1092#1077#1081#1089#1072' - 2'
      ''
      #1042#1099#1087#1086#1083#1085#1080#1083':'
      #1089#1090#1091#1076#1077#1085#1090' '#1075#1088#1091#1087#1087#1099' '#1079'-424'#1059'-'#1072' ('#1087#1086#1090#1086#1082' 73)'
      #1044#1072#1085#1080#1083#1086#1074#1089#1082#1080#1081' '#1040'.'#1042'.'
      '--------------------------------------'
      '2015 '#1075'.')
    ReadOnly = True
    TabOrder = 1
  end
end
