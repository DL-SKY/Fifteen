object FConfig: TFConfig
  Left = 0
  Top = 0
  BorderStyle = bsToolWindow
  Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
  ClientHeight = 158
  ClientWidth = 248
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  OnCreate = FormCreate
  OnKeyDown = FormKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 8
    Top = 103
    Width = 49
    Height = 49
    Caption = '15'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 233
    Height = 89
    Caption = #1060#1080#1096#1082#1080':'
    TabOrder = 0
    object Label1: TLabel
      Left = 10
      Top = 25
      Width = 73
      Height = 13
      Caption = #1062#1074#1077#1090' '#1096#1088#1080#1092#1090#1072':'
    end
    object Label2: TLabel
      Left = 10
      Top = 53
      Width = 82
      Height = 13
      Caption = #1056#1072#1079#1084#1077#1088' '#1096#1088#1080#1092#1090#1072':'
    end
    object ComboBox1: TComboBox
      Left = 97
      Top = 22
      Width = 119
      Height = 22
      Style = csOwnerDrawVariable
      ItemHeight = 16
      TabOrder = 0
      OnChange = ComboBox1Change
      OnKeyDown = ComboBox1KeyDown
      Items.Strings = (
        #1063#1077#1088#1085#1099#1081
        #1057#1080#1085#1080#1081
        #1050#1088#1072#1089#1085#1099#1081
        #1047#1077#1083#1077#1085#1099#1081)
    end
    object ComboBox2: TComboBox
      Left = 98
      Top = 50
      Width = 118
      Height = 22
      Style = csOwnerDrawVariable
      ItemHeight = 16
      TabOrder = 1
      OnChange = ComboBox2Change
      OnKeyDown = ComboBox2KeyDown
      Items.Strings = (
        #1052#1072#1083#1077#1085#1100#1082#1080#1081
        #1057#1088#1077#1076#1085#1080#1081
        #1041#1086#1083#1100#1096#1086#1081
        #1054#1095#1077#1085#1100' '#1073#1086#1083#1100#1096#1086#1081)
    end
  end
  object Button1: TButton
    Left = 166
    Top = 127
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 1
    OnClick = Button1Click
  end
end
