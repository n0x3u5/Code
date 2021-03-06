VERSION 5.00
Object = "{67397AA1-7FB1-11D0-B148-00A0C922E820}#6.0#0"; "MSADODC.OCX"
Begin VB.Form RanchiTransport 
   Caption         =   "RanchiTransport"
   ClientHeight    =   6240
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6840
   LinkTopic       =   "Form1"
   ScaleHeight     =   6240
   ScaleWidth      =   6840
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Home"
      Height          =   375
      Left            =   5160
      TabIndex        =   14
      Top             =   720
      Width           =   1575
   End
   Begin MSAdodcLib.Adodc Adodc1 
      Height          =   495
      Left            =   9720
      Top             =   2400
      Width           =   1455
      _ExtentX        =   2566
      _ExtentY        =   873
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
      RecordSource    =   "Ranchi"
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
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   2760
      Locked          =   -1  'True
      TabIndex        =   7
      Top             =   1560
      Width           =   1935
   End
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   2760
      Locked          =   -1  'True
      TabIndex        =   6
      Top             =   2040
      Width           =   1935
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   2760
      Locked          =   -1  'True
      TabIndex        =   5
      Top             =   2520
      Width           =   1935
   End
   Begin VB.TextBox Text4 
      Height          =   285
      Left            =   2760
      Locked          =   -1  'True
      TabIndex        =   4
      Top             =   3000
      Width           =   1935
   End
   Begin VB.TextBox Text5 
      Height          =   285
      Left            =   2760
      Locked          =   -1  'True
      TabIndex        =   3
      Top             =   3480
      Width           =   1935
   End
   Begin VB.TextBox Text6 
      Height          =   285
      Left            =   2760
      Locked          =   -1  'True
      TabIndex        =   2
      Top             =   3960
      Width           =   1935
   End
   Begin VB.CommandButton Previous 
      Caption         =   "Previous Entry"
      Height          =   375
      Left            =   960
      TabIndex        =   1
      Top             =   4440
      Width           =   1215
   End
   Begin VB.CommandButton Next 
      Caption         =   "Next Entry"
      Height          =   375
      Left            =   2400
      TabIndex        =   0
      Top             =   4440
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "Transport Number"
      Height          =   255
      Left            =   960
      TabIndex        =   13
      Top             =   1560
      Width           =   1575
   End
   Begin VB.Label Label2 
      Caption         =   "Transport Type"
      Height          =   255
      Left            =   960
      TabIndex        =   12
      Top             =   2040
      Width           =   1575
   End
   Begin VB.Label Label3 
      Caption         =   "From"
      Height          =   255
      Left            =   960
      TabIndex        =   11
      Top             =   2520
      Width           =   1575
   End
   Begin VB.Label Label4 
      Caption         =   "Departure Time"
      Height          =   255
      Left            =   960
      TabIndex        =   10
      Top             =   3000
      Width           =   1575
   End
   Begin VB.Label Label5 
      Caption         =   "Arrival Time"
      Height          =   255
      Left            =   960
      TabIndex        =   9
      Top             =   3480
      Width           =   1575
   End
   Begin VB.Label Label6 
      Caption         =   "Cost per Head *"
      Height          =   255
      Left            =   960
      TabIndex        =   8
      Top             =   3960
      Width           =   1575
   End
End
Attribute VB_Name = "RanchiTransport"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim cn As New ADODB.Connection
Dim rs As New ADODB.Recordset
Dim sql As String

Private Sub Command1_Click()
RanchiTransport.Hide
Home.Show
End Sub

Private Sub Form_Load()
    RanchiTransport.BackColor = vbMagenta
    cn.Open "TouristInfo", "", ""
    sql = "Select * from Ranchi"
    rs.Open sql, cn, adOpenKeyset
End Sub

Private Sub Next_Click()
    rs.MoveNext
    If rs.EOF Then
        MsgBox ("Last Record")
        rs.MoveLast
    End If
    Text1.Text = rs!TransportNumber
    Text2.Text = rs!TransportType
    Text3.Text = rs!From
    Text4.Text = rs!DepartureTime
    Text5.Text = rs!ArrivalTime
    Text6.Text = rs!CostPerHead
End Sub

Private Sub Previous_Click()
    rs.MovePrevious
    If rs.BOF Then
        MsgBox ("First Record")
        rs.MoveFirst
    End If
    Text1.Text = rs!TransportNumber
    Text2.Text = rs!TransportType
    Text3.Text = rs!From
    Text4.Text = rs!DepartureTime
    Text5.Text = rs!ArrivalTime
    Text6.Text = rs!CostPerHead
End Sub

