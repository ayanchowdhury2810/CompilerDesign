#Construct a DFA to accept a string containing two consecutive zero’s followed by two consecutive ones.

wrd = "111111010"

if "0011" in wrd:
    print("Accepted")
else:
    print("Not Accepted")
