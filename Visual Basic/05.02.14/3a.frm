VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4455
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   11685
   LinkTopic       =   "Form1"
   ScaleHeight     =   4455
   ScaleWidth      =   11685
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Change Color"
      Height          =   495
      Left            =   1680
      TabIndex        =   6
      Top             =   3840
      Width           =   3135
   End
   Begin VB.Frame Frame2 
      Caption         =   "Frame2"
      Height          =   2895
      Left            =   4440
      TabIndex        =   3
      Top             =   600
      Width           =   2895
      Begin VB.OptionButton Option4 
         Caption         =   "Option4"
         Height          =   735
         Left            =   120
         TabIndex        =   5
         Top             =   1800
         Width           =   2655
      End
      Begin VB.OptionButton Option3 
         Caption         =   "Option3"
         Height          =   735
         Left            =   120
         TabIndex        =   4
         Top             =   480
         Width           =   2655
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   "Frame1"
      Height          =   3015
      Left            =   840
      TabIndex        =   0
      Top             =   480
      Width           =   2895
      Begin VB.OptionButton Option2 
         Caption         =   "Option2"
         Height          =   1095
         Left            =   120
         TabIndex        =   2
         Top             =   1560
         Width           =   2655
      End
      Begin VB.OptionButton Option1 
         Caption         =   "Option1"
         Height          =   735
         Left            =   120
         TabIndex        =   1
         Top             =   360
         Width           =   2415
      End
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
If (Option1.Value = True And Option3.Value = True) Then
Form1.BackColor = vbBlue
End If
If (Option1.Value = True And Option4.Value = True) Then
Form1.BackColor = vbGreen
End If
If (Option2.Value = True And Option3.Value = True) Then
Form1.BackColor = vbRed
End If
If (Option2.Value = True And Option4.Value = True) Then
Form1.BackColor = vbBlack
End If
End Sub

