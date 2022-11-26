# Write a Python program to test whether a given identifier is valid or not in a Python program.

# Function that returns true if str1
# is a valid identifier
def isValid(str1, n):
# If first character is invalid
    if (((ord(str1[0]) >= ord('a') and
        ord(str1[0]) <= ord('z')) or
        (ord(str1[0]) >= ord('A') and
        ord(str1[0]) <= ord('Z')) or
        ord(str1[0]) == ord('_')) == False):
        return False
# Traverse the for the rest of the characters
    for i in range(1, len(str1)):
        if (((ord(str1[i]) >= ord('a') and
            ord(str1[i]) <= ord('z')) or
            (ord(str1[i]) >= ord('A') and
            ord(str1[i]) <= ord('Z')) or
            (ord(str1[i]) >= ord('0') and
            ord(str1[i]) <= ord('9')) or
            ord(str1[i]) == ord('_')) == False):
            return False
# is a valid identifier
    return True
# Driver code
str1 = "_Asuna123"
n = len(str1)
if (isValid(str1, n)):
    print("Valid")
else:
    print("Invalid")

