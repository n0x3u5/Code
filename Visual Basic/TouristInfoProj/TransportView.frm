VERSION 5.00
Object = "{67397AA1-7FB1-11D0-B148-00A0C922E820}#6.0#0"; "MSADODC.OCX"
Begin VB.Form DelhiTransport 
   Caption         =   "Form1"
   ClientHeight    =   4665
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5370
   LinkTopic       =   "Form1"
   ScaleHeight     =   4665
   ScaleWidth      =   5370
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Home"
      Height          =   375
      Left            =   4440
      TabIndex        =   14
      Top             =   360
      Width           =   735
   End
   Begin MSAdodcLib.Adodc Adodc2 
      Height          =   330
      Left            =   6720
      Top             =   4080
      Width           =   1575
      _ExtentX        =   2778
      _ExtentY        =   582
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
      RecordSource    =   "Delhi"
      Caption         =   "Adodc2"
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
   Begin VB.CommandButton Next 
      Caption         =   "Next Entry"
      Height          =   375
      Left            =   1680
      TabIndex        =   13
      Top             =   3720
      Width           =   975
   End
   Begin VB.CommandButton Previous 
      Caption         =   "Previous Entry"
      Height          =   375
      Left            =   240
      TabIndex        =   12
      Top             =   3720
      Width           =   1215
   End
   Begin VB.TextBox Text6 
      Height          =   285
      Left            =   2040
      Locked          =   -1  'True
      TabIndex        =   11
      Top             =   3240
      Width           =   1935
   End
   Begin VB.TextBox Text5 
      Height          =   285
      Left            =   2040
      Locked          =   -1  'True
      TabIndex        =   9
      Top             =   2760
      Width           =   1935
   End
   Begin VB.TextBox Text4 
      Height          =   285
      Left            =   2040
      Locked          =   -1  'True
      TabIndex        =   7
      Top             =   2280
      Width           =   1935
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   2040
      Locked          =   -1  'True
      TabIndex        =   5
      Top             =   1800
      Width           =   1935
   End
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   2040
      Locked          =   -1  'True
      TabIndex        =   3
      Top             =   1320
      Width           =   1935
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   2040
      Locked          =   -1  'True
      TabIndex        =   1
      Top             =   840
      Width           =   1935
   End
   Begin MSAdodcLib.Adodc Adodc1 
      Height          =   330
      Left            =   14160
      Top             =   120
      Width           =   1935
      _ExtentX        =   3413
      _ExtentY        =   582
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
      RecordSource    =   "Transport"
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
   Begin VB.Label Label6 
      Caption         =   "Cost per Head *"
      Height          =   255
      Left            =   240
      TabIndex        =   10
      Top             =   3240
      Width           =   1575
   End
   Begin VB.Label Label5 
      Caption         =   "Arrival Time"
      Height          =   255
      Left            =   240
      TabIndex        =   8
      Top             =   2760
      Width           =   1575
   End
   Begin VB.Label Label4 
      Caption         =   "Departure Time"
      Height          =   255
      Left            =   240
      TabIndex        =   6
      Top             =   2280
      Width           =   1575
   End
   Begin VB.Label Label3 
      Caption         =   "From"
      Height          =   255
      Left            =   240
      TabIndex        =   4
      Top             =   1800
      Width           =   1575
   End
   Begin VB.Label Label2 
      Caption         =   "Transport Type"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   1320
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "Transport Number"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   840
      Width           =   1575
   End
End
Attribute VB_Name = "DelhiTransport"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim cn As New ADODB.Connection
Dim rs As New ADODB.Recordset
Dim sql As String

Private Sub Command1_Click()
DelhiTransport.Hide
Home.Show
End Sub

Private Sub Form_Load()
    DelhiTransport.BackColor = vbMagenta
    cn.Open "TouristInfo", "", ""
    sql = "Select * from Delhi"
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
