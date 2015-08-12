VERSION 5.00
Begin VB.Form Form1 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "A Simple Calculator"
   ClientHeight    =   3615
   ClientLeft      =   45
   ClientTop       =   435
   ClientWidth     =   5895
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3615
   ScaleWidth      =   5895
   StartUpPosition =   2  'CenterScreen
   Begin VB.Frame Frame1 
      Caption         =   "4 Function Calculator"
      Height          =   3375
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   5655
      Begin VB.CommandButton Command5 
         Caption         =   "Concatenate"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   9.75
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   495
         Left            =   3960
         TabIndex        =   7
         Top             =   1560
         Width           =   1575
      End
      Begin VB.CommandButton Command1 
         Caption         =   "+"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   13.5
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   495
         Left            =   120
         TabIndex        =   3
         Top             =   1560
         Width           =   855
      End
      Begin VB.CommandButton Command4 
         Caption         =   "/"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   13.5
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   495
         Left            =   3000
         TabIndex        =   6
         Top             =   1560
         Width           =   855
      End
      Begin VB.CommandButton Command3 
         Caption         =   "*"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   13.5
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   495
         Left            =   2040
         TabIndex        =   5
         Top             =   1560
         Width           =   855
      End
      Begin VB.CommandButton Command2 
         Caption         =   "-"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   13.5
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   495
         Left            =   1080
         TabIndex        =   4
         Top             =   1560
         Width           =   855
      End
      Begin VB.TextBox Text3 
         Height          =   285
         Left            =   1620
         TabIndex        =   8
         Top             =   2760
         Width           =   2535
      End
      Begin VB.TextBox Text2 
         Height          =   285
         Left            =   1440
         TabIndex        =   2
         Top             =   840
         Width           =   3975
      End
      Begin VB.TextBox Text1 
         Height          =   285
         Left            =   1440
         TabIndex        =   1
         Top             =   360
         Width           =   3975
      End
      Begin VB.Label Label3 
         Alignment       =   2  'Center
         Caption         =   "Result"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   13.5
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   375
         Left            =   1620
         TabIndex        =   9
         Top             =   2280
         Width           =   2535
      End
      Begin VB.Label Label2 
         Caption         =   "Number #2"
         Height          =   255
         Left            =   120
         TabIndex        =   10
         Top             =   840
         Width           =   1215
      End
      Begin VB.Label Label1 
         Caption         =   "Number #1"
         Height          =   255
         Left            =   120
         TabIndex        =   11
         Top             =   360
         Width           =   1215
      End
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
    c = a + b
    Text3.Text = c
End Sub

Private Sub Command2_Click()
    Dim a As Integer
    Dim b As Integer
    Dim c As Integer
    a = Text1.Text
    b = Text2.Text
    c = a - b
    Text3.Text = c
End Sub

Private Sub Command3_Click()
    Dim a As Integer
    Dim b As Integer
    Dim c As Integer
    a = Text1.Text
    b = Text2.Text
    c = a * b
    Text3.Text = c
End Sub

Private Sub Command4_Click()
    Dim a As Integer
    Dim b As Integer
    Dim c As Double
    a = Text1.Text
    b = Text2.Text
    c = a / b
    Text3.Text = c
End Sub

Private Sub Command5_Click()
    Dim a
    Dim b
    Dim c
    a = Text1.Text
    b = Text2.Text
    c = a + b
    Text3.Text = c
End Sub
