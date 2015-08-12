echo -------MAX OF 2 NUMBERS-------
echo Enter two numbers:-
read a
read b
if [ $a -lt $b ]
then
	echo The larger number is:-
	echo $b
else
	echo The larger number is:-
	echo $a
fi
echo -------MAX OF 3 NUMBERS-------
echo Enter three numbers:-
read c
read d
read e
if [ $c -gt $d ]
then
	if [ $c -gt $e ]
	then
		echo The larger number is:-
		echo $c
	else
		echo The larger number is:-
		echo $e
	fi
else
	if [ $d -gt $e ]
	then
		echo The larger number is:-
		echo $d
	else
		echo The larger number is:-
		echo $e
	fi
fi
