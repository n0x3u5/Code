VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Min and Max"
   ClientHeight    =   2535
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   2535
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Calculate Maximum"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   2400
      TabIndex        =   9
      Top             =   1560
      Width           =   2175
   End
   Begin VB.TextBox Text4 
      Height          =   285
      Left            =   1560
      TabIndex        =   7
      Top             =   2160
      Width           =   3015
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Calculate Minimum"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   120
      TabIndex        =   6
      Top             =   1560
      Width           =   2175
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   1560
      TabIndex        =   2
      Top             =   1080
      Width           =   3015
   End
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   1560
      TabIndex        =   1
      Top             =   600
      Width           =   3015
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   1560
      TabIndex        =   0
      Top             =   120
      Width           =   3015
   End
   Begin VB.Label Label4 
      Caption         =   "Result"
      Height          =   255
      Left            =   120
      TabIndex        =   8
      Top             =   2160
      Width           =   1335
   End
   Begin VB.Label Label3 
      Caption         =   "Number #3"
      Height          =   255
      Left            =   120
      TabIndex        =   5
      Top             =   1080
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   "Number #2"
      Height          =   255
      Left            =   120
      TabIndex        =   4
      Top             =   600
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "Number #1"
      Height          =   255
      Left            =   120
      TabIndex        =   3
      Top             =   120
      Width           =   1335
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
    Dim c As Integer
    a = Text1.Text
    b = Text2.Text
    c = Text3.Text
    If a < b And a < c Then
        Text4.Text = a
    Else
        If b < a And b < c Then
            Text4.Text = b
        Else
            Text4.Text = c
        End If
    End If
End Sub

Private Sub Command2_Click()
    Dim a As Integer
    Dim b As Integer
    Dim c As Integer
    a = Text1.Text
    b = Text2.Text
    c = Text3.Text
    If a > b And a > c Then
        Text4.Text = a
    Else
        If b > a And b > c Then
            Text4.Text = b
        Else
            Text4.Text = c
        End If
    End If
End Sub
