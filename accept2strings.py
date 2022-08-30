# Construct a DFA which accepts set of all strings over ∑ = {a, b} of length 2.

def checkStateA(n):
    if(len(n)==1):
        print('String not accepted')
    else:
        if(n[0]=='a' or n[0]=='b'):
            stateB(n[1:]);
            
def stateB(n):
    if(len(n)!=1):
        print('String not accepted')
    else:
        stateC(n[1:])
        
def stateC(n):
    if(len(n)==0):
        print('String accepted')
    else:
        print('String not accepted')

n=input()
checkStateA(n);
