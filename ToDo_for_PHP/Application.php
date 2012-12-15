<?php
	include 'StringList.php';

	class Application
	{
		//-----------------------------------------------------------------------
		// 初期化
		//-----------------------------------------------------------------------
		public function Initial()
	    {
			$this->file_name  = "todolist.txt";
			$this->strlist_obj = new StringList;
	    }
	
		//-----------------------------------------------------------------------
		// 実行
		//-----------------------------------------------------------------------
	    public function Run()
	    {
			$fp = fopen( $this->file_name, 'r');
		
			if ($fp)
			{
				while (!feof($fp))
		        {
		        	$str = fgets($fp);
					if( strlen( $str ) > 0 )
					{
			        	print($str);
			        	print('<BR>');
						$this->strlist_obj->Add( $str );
					}
		        }
			}
		}
	
		//-----------------------------------------------------------------------
		// 終了
		//-----------------------------------------------------------------------
	    public function End()
	    {
	    }

		private $file_name;
		private $strlist_obj;
	}
?>
