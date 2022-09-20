secretFruit = "batee5"
guessInput =""
guessCount = 3
flag = 0

while guessInput != secretFruit and flag ==0 :
    if guessCount > 0:
        guessInput = input("Guess a fruit(" + str(guessCount) + " guesses left) :")
        guessCount -= 1
    else:
        flag = 1

if flag == 1:
    print("You ran out of guesses")
else:
    print("You Win!")