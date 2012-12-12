import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Application
{
	//-----------------------------------------------------------------------
	// コンストラクタ
	//-----------------------------------------------------------------------
	public Application()
	{
		StrList = new StringList();
	}

	//-----------------------------------------------------------------------
	// 初期化
	//-----------------------------------------------------------------------
	public  void Initial()
	{
	}

	//-----------------------------------------------------------------------
	// 実行
	//---------------------------------------------------------------------------
	// 文字列をリストに登録する
	// コンソールから入力された文字列をリストに登録する。
	// [end]と入力すると終了。
	//---------------------------------------------------------------------------
	public void Run()
	{
		BufferedReader br = new BufferedReader( new InputStreamReader(System.in));
		String str = "";

		while( true )
		{
			System.out.println( "Please input your ToDo ([end]=exit) : " );

			try {
				str = br.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}

			if( str.equals( "end" ) )
			{
				break;
			}
			StrList.Add( str );
		}
		System.out.println( "Program is over." );
	}

	//-----------------------------------------------------------------------
	// 終了
	//-----------------------------------------------------------------------
	public void Exit()
	{
	}

	private StringList	StrList;
}
