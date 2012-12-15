<?php
	$file_name  = "todolist.txt";
	$input_data = "";

	if( count($_POST) >= 1 )
	{
		$input_data = $_POST['todo'];
	}

	if ($input_data == "end")
	{
		print('<meta http-equiv="refresh" content="0;URL=http://localhost/pdt/ToDo.php/">');
	}
	else if( $input_data != "" )
	{
		$fp = fopen($file_name, "a");
		fwrite($fp, $input_data);
		fwrite($fp, "\n");
		fclose($fp);
	}

	print('<P>input ToDo.([end]=exit)</P>');
	print('<form method="POST" action="./input.php">');
	print('<input type="text" name="todo">');
	print('<input type="submit" name="btn1" value="input">');
	print('</form>');
?>
