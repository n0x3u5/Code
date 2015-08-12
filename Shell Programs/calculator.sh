echo Enter two numbers:-
read a
read b
echo Press
echo 1 For addition
echo 2 For subtraction
echo 3 For multiplication
echo 4 For division
echo Enter choice:-
read ch
case $ch in 
1) c=`expr $a + $b`;;
2) c=`expr $a - $b`;;
3) c=`expr $a \* $b`;;
4) c=`expr $a / $b`
esac
echo The result is $c
