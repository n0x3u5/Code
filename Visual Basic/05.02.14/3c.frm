VERSION 5.00
Begin VB.Form Form3 
   Caption         =   "digital calender"
   ClientHeight    =   5370
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   11190
   LinkTopic       =   "Form3"
   ScaleHeight     =   5370
   ScaleWidth      =   11190
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command4 
      Caption         =   "show"
      Height          =   1095
      Left            =   8160
      TabIndex        =   6
      Top             =   1920
      Width           =   1935
   End
   Begin VB.CommandButton Command3 
      Caption         =   "year"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   720
      TabIndex        =   2
      Top             =   3360
      Width           =   2775
   End
   Begin VB.CommandButton Command2 
      Caption         =   "month"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   975
      Left            =   720
      TabIndex        =   1
      Top             =   1920
      Width           =   2775
   End
   Begin VB.CommandButton Command1 
      Caption         =   "date"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   720
      TabIndex        =   0
      Top             =   600
      Width           =   2775
   End
   Begin VB.Label Label4 
      Height          =   495
      Left            =   7800
      TabIndex        =   7
      Top             =   600
      Width           =   1935
   End
   Begin VB.Label Label3 
      Height          =   615
      Left            =   4320
      TabIndex        =   5
      Top             =   2040
      Width           =   3135
   End
   Begin VB.Label Label2 
      Height          =   375
      Left            =   4440
      TabIndex        =   4
      Top             =   1440
      Width           =   2895
   End
   Begin VB.Label Label1 
      Height          =   375
      Left            =   4440
      TabIndex        =   3
      Top             =   600
      Width           =   2895
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim s
Private Sub Command4_Click()
s = Now
Label1.Caption = Format(s, "dd")
Label2.Caption = Format(s, "mm")
Label3.Caption = Format(s, "yy")
Label4.Caption = Format(s, "dddd")
If (s > 0) Then
Form3.BackColor = vbBlue
End If

End Sub

