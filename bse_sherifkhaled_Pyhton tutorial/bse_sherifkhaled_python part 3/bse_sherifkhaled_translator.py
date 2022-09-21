def translator(phrase):
    result=""
    for letter in phrase:
        if letter.lower() in "aeiou":
            result = result + "V"
        else:
            result = result + letter
    return result     

a = input("Enter a phrase :")

print(translator(a))
