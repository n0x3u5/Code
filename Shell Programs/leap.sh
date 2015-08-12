read year
if [ `expr $year % 100` -ne 0 ]
then
	if [ `expr $year % 4` -eq 0 -o `expr $year % 400` -eq 0 ]
	then
		echo Leap Year
	else
		echo Not Leap Year
	fi
else
	echo Leap Year
fi
