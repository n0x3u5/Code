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
			fact=1
			for (( j=r; j>0; j--))
			do
				fact=`expr $fact \* $j`
			done
			s=`expr $s + $fact`
			temp=`expr $temp / 10 `
		done
		if [ $s -eq $i ]
		then
			echo $i is a Krishnamurthy Number
		fi
	done
fi
