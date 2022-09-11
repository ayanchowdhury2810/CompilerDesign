#Construct a DFA with ∑ = {a, b} which accepts all strings of length greater than equal to 2 and less than equal to 2.

word = "a" 

if len(word) >= 2 or len(word) <= 2:
    print("Accepted")
else:
    print("Not Accepted")
