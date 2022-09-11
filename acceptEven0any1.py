# Construct a DFA to accept a string containing even number of zeros and any number of ones.

count = 0

wrd = "001011111"

for letter in wrd:
    if letter == '0':
        count += 1

if count % 2 == 0:
    print("Accepted")
else:
    print("Not Accepted")
