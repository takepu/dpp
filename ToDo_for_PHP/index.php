<?php
	$file_name = "todolist.txt";
	if( file_exists($file_name) )
	{
		unlink($file_name);
	}
?>

<meta http-equiv="refresh" content="0;URL=http://localhost/pdt/input.php/">
