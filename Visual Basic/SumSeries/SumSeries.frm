VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "Form2"
   ClientHeight    =   1935
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   4680
   LinkTopic       =   "Form2"
   ScaleHeight     =   1935
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   2280
      TabIndex        =   6
      Top             =   1560
      Width           =   2295
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Calculate Sum of Series"
      Height          =   375
      Left            =   1320
      TabIndex        =   4
      Top             =   960
      Width           =   1935
   End
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   2280
      TabIndex        =   2
      Top             =   480
      Width           =   2295
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   2280
      TabIndex        =   0
      Top             =   120
      Width           =   2295
   End
   Begin VB.Label Label3 
      Caption         =   "Result"
      Height          =   255
      Left            =   120
      TabIndex        =   5
      Top             =   1560
      Width           =   2055
   End
   Begin VB.Label Label2 
      Caption         =   "Enter n"
      Height          =   255
      Left            =   120
      TabIndex        =   3
      Top             =   480
      Width           =   2055
   End
   Begin VB.Label Label1 
      Caption         =   "Enter x"
      Height          =   255
      Left            =   120
      TabIndex        =   1
      Top             =   120
      Width           =   2055
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    Dim x As Integer
    Dim n As Integer
    Dim sum As Integer
    x = Text1.Text
    n = Text2.Text
    sum = 1
    For i = 2 To n
        sum = sum + (x ^ i)
    Next
    Text3.Text = sum
End Sub
