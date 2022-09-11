#Construct a DFA with ∑ = {0, 1} which accepts the strings which start with 1 and ends with 0.

wrd = "10010010"

if wrd[0] == '1' and wrd[len(wrd) - 1] == '0':
    print("Accepted")
else:
    print("Not Accepted")
