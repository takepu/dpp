Public Class StringList
    '//-----------------------------------------------------------------------
    '// コンストラクタ
    '//-----------------------------------------------------------------------
    Public Sub New()

    End Sub

    '//-----------------------------------------------------------------------
    '// 終了
    '//-----------------------------------------------------------------------
    Protected Overrides Sub Finalize()
    End Sub

    '//-----------------------------------------------------------------------
    '// 文字列追加
    '//-----------------------------------------------------------------------
    Public Sub Add(ByVal str As String)
        Dim max As Integer
        If IsNothing(StrListObj) Then
            max = 0
        Else
            max = StrListObj.Length
        End If

        ReDim Preserve StrListObj(max)
        StrListObj(max) = str
    End Sub

    '//-----------------------------------------------------------------------
    '// 文字列取得
    '//-----------------------------------------------------------------------
    Public Function GetStr(ByVal idx As Integer) As String
        If idx >= StrListObj.Length Then
            GetStr = ""
        Else
            GetStr = StrListObj(idx)
        End If
    End Function

    '//-----------------------------------------------------------------------
    '// リスト長取得
    '//-----------------------------------------------------------------------
    Public Function GetLength() As Integer
        GetLength = StrListObj.Length
    End Function

    Private StrListObj() As String
End Class
