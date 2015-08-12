VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "stopwatch"
   ClientHeight    =   4605
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   8355
   LinkTopic       =   "Form2"
   ScaleHeight     =   4605
   ScaleWidth      =   8355
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command3 
      Caption         =   "exit"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   735
      Left            =   3240
      TabIndex        =   5
      Top             =   3600
      Width           =   2055
   End
   Begin VB.CommandButton Command2 
      Caption         =   "stop"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   735
      Left            =   1320
      TabIndex        =   1
      Top             =   2040
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "start"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   1320
      TabIndex        =   0
      Top             =   840
      Width           =   1335
   End
   Begin VB.Label Label3 
      Caption         =   "elaped time"
      Height          =   495
      Left            =   4800
      TabIndex        =   4
      Top             =   2520
      Width           =   2535
   End
   Begin VB.Label Label2 
      Caption         =   "stop time"
      Height          =   495
      Left            =   4920
      TabIndex        =   3
      Top             =   1560
      Width           =   2535
   End
   Begin VB.Label Label1 
      Caption         =   "start time"
      Height          =   495
      Left            =   4920
      TabIndex        =   2
      Top             =   600
      Width           =   2535
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim st, sp, el
Private Sub Command1_Click()
st = Now
If (st > 0) Then
Form2.BackColor = RGB(23, 55, 255)
End If
Label1.Caption = Format(st, "hh:mm:ss")
End Sub

Private Sub Command2_Click()
sp = Now
el = st - sp
If (sp > 0) Then
Form2.BackColor = VB
End If
Label2.Caption = Format(sp, "hh:mm:ss")
Label3.Caption = Format(el, "hh:mm:ss")
End Sub

Private Sub Command3_Click()
End
End Sub
