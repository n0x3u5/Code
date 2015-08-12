VERSION 5.00
Begin VB.Form Form4 
   Caption         =   "Form4"
   ClientHeight    =   4455
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   12015
   LinkTopic       =   "Form4"
   ScaleHeight     =   4455
   ScaleWidth      =   12015
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "show"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1095
      Left            =   5760
      TabIndex        =   2
      Top             =   2160
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "inputbox"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1095
      Left            =   3600
      TabIndex        =   1
      Top             =   2160
      Width           =   1695
   End
   Begin VB.Label Label1 
      Caption         =   "Label1"
      Height          =   975
      Left            =   4440
      TabIndex        =   0
      Top             =   360
      Width           =   3015
   End
End
Attribute VB_Name = "Form4"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim a As Integer
Private Sub Command1_Click()
a = InputBox("enter value:", "my input box", 0)
If (a > 5) Then
Form4.BackColor = vbYellow
End If
End Sub

Private Sub Command2_Click()
Label1.Caption = a
If (3) Then
Form4.BackColor = violet
End If

End Sub
