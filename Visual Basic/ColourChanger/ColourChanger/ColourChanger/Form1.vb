Public Class Form1

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        Label1.Text = Val(Label1.Text) - 1
        Label1.BackColor = RGB( _
        Int(Rnd() * 256), _
        Int(Rnd() * 256), _
        Int(Rnd() * 256))
        If Label1.Text = 0 Then Timer1.Enabled = False
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Timer1.Enabled = True
    End Sub
End Class