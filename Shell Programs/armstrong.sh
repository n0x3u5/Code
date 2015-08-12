echo Enter the upper bound:-
read ub
echo Enter the lower bound:-
read lb;
if [ $ub -le $lb ]
then
	echo Upper bound must be greater than lower bound.
else
	for (( i=lb ; i<=ub ; i++ ))
	do
		temp=$i
		s=0
		while [ $temp -ne 0 ]
		do
			r=`expr $temp % 10`
			s=`expr $s + \( $r \* $r \* $r \)`
			temp=`expr $temp / 10 `
		done
		if [ $s -eq $i ]
		then
			echo $i is an Armstrong Number
		fi
	done
fi
