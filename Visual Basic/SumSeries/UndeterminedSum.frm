VERSION 5.00
Begin VB.Form Form3 
   Caption         =   "Form3"
   ClientHeight    =   615
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   1935
   LinkTopic       =   "Form3"
   ScaleHeight     =   615
   ScaleWidth      =   1935
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Input"
      Height          =   375
      Left            =   240
      TabIndex        =   0
      Top             =   120
      Width           =   1455
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    Dim n As Integer
    Dim sum As Integer
    sum = 0
    While n >= 0
        n = InputBox("Enter a number:")
        If n >= 0 Then
            sum = sum + n
        End If
    Wend
    m = MsgBox("The sum is " & sum, vbOKCancel, "Result")
End Sub
