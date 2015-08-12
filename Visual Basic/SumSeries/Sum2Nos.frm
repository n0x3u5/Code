VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2175
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   2175
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text3 
      Height          =   375
      Left            =   2160
      TabIndex        =   6
      Top             =   1680
      Width           =   2415
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Sum"
      Height          =   495
      Left            =   1320
      TabIndex        =   4
      Top             =   1080
      Width           =   1695
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   2160
      TabIndex        =   3
      Top             =   600
      Width           =   2415
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2160
      TabIndex        =   1
      Top             =   120
      Width           =   2415
   End
   Begin VB.Label Label3 
      Caption         =   "Result"
      Height          =   255
      Left            =   120
      TabIndex        =   5
      Top             =   1680
      Width           =   1935
   End
   Begin VB.Label Label2 
      Caption         =   "#2"
      Height          =   255
      Left            =   120
      TabIndex        =   2
      Top             =   600
      Width           =   1935
   End
   Begin VB.Label Label1 
      Caption         =   "#1"
      Height          =   255
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   1815
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    Dim a As Integer
    Dim b As Integer
    a = Text1.Text
    b = Text2.Text
    c = a + b
    Text3.Text = c
End Sub
