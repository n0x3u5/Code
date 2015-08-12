from random import randint
import math


high = int (input ("Enter the upper limit: "))
n = int (input ("Enter a number: "))

guess = randint (0,high)

c = math.ceil (math.log ( high - 0 + 1, 2))

while c > 0:

    print ("You have " + c + " guesses left.")

    if n == guess:
        print ("Congrats!")
        break

    elif n < guess:
        print ("Try a higher number!")
        n = int (input ("Enter a number: "))

    else:
        print ("Try a lower number!")
        n = int (input ("Enter a  number: "))

    c = c - 1
