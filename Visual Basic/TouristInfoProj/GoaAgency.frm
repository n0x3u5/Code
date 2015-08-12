VERSION 5.00
Object = "{67397AA1-7FB1-11D0-B148-00A0C922E820}#6.0#0"; "MSADODC.OCX"
Begin VB.Form GoaAgency 
   Caption         =   "GoaAgency"
   ClientHeight    =   6720
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   15975
   LinkTopic       =   "Form1"
   ScaleHeight     =   6720
   ScaleWidth      =   15975
   StartUpPosition =   3  'Windows Default
   Begin MSAdodcLib.Adodc Adodc1 
      Height          =   375
      Left            =   12840
      Top             =   4320
      Width           =   1335
      _ExtentX        =   2355
      _ExtentY        =   661
      ConnectMode     =   0
      CursorLocation  =   3
      IsolationLevel  =   -1
      ConnectionTimeout=   15
      CommandTimeout  =   30
      CursorType      =   3
      LockType        =   3
      CommandType     =   2
      CursorOptions   =   0
      CacheSize       =   50
      MaxRecords      =   0
      BOFAction       =   0
      EOFAction       =   0
      ConnectStringType=   3
      Appearance      =   1
      BackColor       =   -2147483643
      ForeColor       =   -2147483640
      Orientation     =   0
      Enabled         =   -1
      Connect         =   "DSN=TouristInfo"
      OLEDBString     =   ""
      OLEDBFile       =   ""
      DataSourceName  =   "TouristInfo"
      OtherAttributes =   ""
      UserName        =   ""
      Password        =   ""
      RecordSource    =   "GoaAgency"
      Caption         =   "Adodc1"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      _Version        =   393216
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Home"
      Height          =   615
      Left            =   6960
      TabIndex        =   6
      Top             =   720
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   3720
      Locked          =   -1  'True
      TabIndex        =   5
      Top             =   1320
      Width           =   1935
   End
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   3720
      Locked          =   -1  'True
      TabIndex        =   4
      Top             =   1800
      Width           =   1935
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   3720
      Locked          =   -1  'True
      TabIndex        =   3
      Top             =   2280
      Width           =   1935
   End
   Begin VB.TextBox Text4 
      Height          =   285
      Left            =   3720
      Locked          =   -1  'True
      TabIndex        =   2
      Top             =   2760
      Width           =   1935
   End
   Begin VB.CommandButton Previous 
      Caption         =   "Previous Entry"
      Height          =   375
      Left            =   2040
      TabIndex        =   1
      Top             =   3840
      Width           =   1215
   End
   Begin VB.CommandButton Next 
      Caption         =   "Next Entry"
      Height          =   375
      Left            =   3360
      TabIndex        =   0
      Top             =   3840
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "Agency Id"
      Height          =   255
      Left            =   1920
      TabIndex        =   10
      Top             =   1320
      Width           =   1575
   End
   Begin VB.Label Label2 
      Caption         =   "Agency Name"
      Height          =   255
      Left            =   1920
      TabIndex        =   9
      Top             =   1800
      Width           =   1575
   End
   Begin VB.Label Label3 
      Caption         =   "Contact Number"
      Height          =   255
      Left            =   1920
      TabIndex        =   8
      Top             =   2280
      Width           =   1575
   End
   Begin VB.Label Label4 
      Caption         =   "E-mail:"
      Height          =   255
      Left            =   1920
      TabIndex        =   7
      Top             =   2760
      Width           =   1575
   End
End
Attribute VB_Name = "GoaAgency"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim cn As New ADODB.Connection
Dim rs As New ADODB.Recordset
Dim sql As String

Private Sub Command1_Click()
GoaAgency.Hide
Home.Show
End Sub

Private Sub Form_Load()
    GoaAgency.BackColor = vbMagenta
    cn.Open "TouristInfo", "", ""
    sql = "Select * from GoaAgency"
    rs.Open sql, cn, adOpenKeyset
End Sub

Private Sub Next_Click()
    rs.MoveNext
    If rs.EOF Then
        MsgBox ("Last Record")
        rs.MoveLast
    End If
     Text1.Text = rs!AgencyId
    Text2.Text = rs!AgencyName
    Text3.Text = rs!ContactNumber
    Text4.Text = rs!Email

End Sub

Private Sub Previous_Click()
    rs.MovePrevious
    If rs.BOF Then
        MsgBox ("First Record")
        rs.MoveFirst
    End If
    Text1.Text = rs!AgencyId
    Text2.Text = rs!AgencyName
    Text3.Text = rs!ContactNumber
    Text4.Text = rs!Email

End Sub



