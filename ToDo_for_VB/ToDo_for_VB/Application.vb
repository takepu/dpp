Public Class Application
    '//-----------------------------------------------------------------------
    '// コンストラクタ
    '//-----------------------------------------------------------------------
    Public Sub New()
        StrList = New StringList
    End Sub

    '//-----------------------------------------------------------------------
    '// 初期化
    '//-----------------------------------------------------------------------
    Public Sub Initial()
    End Sub

    '//-----------------------------------------------------------------------
    '// 実行
    '//---------------------------------------------------------------------------
    '// 文字列をリストに登録する
    '// コンソールから入力された文字列をリストに登録する。
    '// [end]と入力すると終了。
    '//---------------------------------------------------------------------------
    Public Sub Run()
        Dim in_str As String

        in_str = ""
        While in_str <> "end"
            Console.Write("Please input your ToDo ([end]=exit) : ")
            in_str = Console.ReadLine()

            If in_str <> "end" Then
                StrList.Add(in_str)
            End If
        End While
    End Sub

    '//-----------------------------------------------------------------------
    '// 終了
    '//-----------------------------------------------------------------------
    Public Sub ExitFunc()
        For idx = 0 To StrList.GetLength()
            Console.WriteLine(StrList.GetStr(idx))
        Next idx
    End Sub

    Private StrList As StringList
End Class
