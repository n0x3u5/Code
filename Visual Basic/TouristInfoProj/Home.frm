VERSION 5.00
Begin VB.Form Home 
   Caption         =   "Welcome to this stuff"
   ClientHeight    =   3990
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   11385
   LinkTopic       =   "Form1"
   ScaleHeight     =   11010
   ScaleWidth      =   20370
   StartUpPosition =   3  'Windows Default
   Begin VB.PictureBox Picture1 
      AutoSize        =   -1  'True
      Height          =   2955
      Left            =   7320
      Picture         =   "Home.frx":0000
      ScaleHeight     =   2895
      ScaleWidth      =   3915
      TabIndex        =   6
      Top             =   2760
      Width           =   3975
   End
   Begin VB.CommandButton Command4 
      Caption         =   "Exit"
      Height          =   375
      Left            =   17040
      TabIndex        =   4
      Top             =   240
      Width           =   1095
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Tourist Agency Information"
      Height          =   735
      Left            =   9960
      TabIndex        =   3
      Top             =   8040
      Width           =   1935
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Hotel Information"
      Height          =   735
      Left            =   7320
      TabIndex        =   2
      Top             =   8040
      Width           =   1935
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Transport Information"
      Height          =   735
      Left            =   4560
      TabIndex        =   1
      Top             =   8040
      Width           =   1935
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      Left            =   7200
      TabIndex        =   0
      Text            =   "<Select Location...>"
      Top             =   6600
      Width           =   4215
   End
   Begin VB.Label Label1 
      Caption         =   "WELCOME TO TOURISM INDIA"
      BeginProperty Font 
         Name            =   "Harrington"
         Size            =   24
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1095
      Left            =   6000
      TabIndex        =   5
      Top             =   840
      Width           =   7815
   End
End
Attribute VB_Name = "Home"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Combo1_Click()
    Command1.Enabled = True
    Command2.Enabled = True
    Command3.Enabled = True
End Sub

Private Sub Command1_Click()
    If Combo1.Text = "Delhi" Then
        Home.Hide
        DelhiTransport.Show
    End If
    If Combo1.Text = "Ranchi" Then
        Home.Hide
        RanchiTransport.Show
    End If
    If Combo1.Text = "Goa" Then
        Home.Hide
        GoaTransport.Show
    End If
End Sub

Private Sub Command2_Click()
 If Combo1.Text = "Delhi" Then
        Home.Hide
        DelhiHotel.Show
    End If
    If Combo1.Text = "Ranchi" Then
        Home.Hide
        RanchiHotel.Show
    End If
    If Combo1.Text = "Goa" Then
        Home.Hide
        GoaHotel.Show
    End If
End Sub

Private Sub Command3_Click()
If Combo1.Text = "Delhi" Then
        Home.Hide
        DelhiAgency.Show
    End If
    If Combo1.Text = "Ranchi" Then
        Home.Hide
        RanchiAgency.Show
    End If
    If Combo1.Text = "Goa" Then
        Home.Hide
        GoaAgency.Show
    End If
End Sub

Private Sub Command4_Click()
    End
End Sub

Private Sub Form_Load()
    Label1.BackColor = vbYellow
    Home.BackColor = vbYellow
    Command1.Enabled = False
    Command2.Enabled = False
    Command3.Enabled = False
    Combo1.AddItem ("Delhi")
    Combo1.AddItem ("Ranchi")
    Combo1.AddItem ("Goa")
End Sub

