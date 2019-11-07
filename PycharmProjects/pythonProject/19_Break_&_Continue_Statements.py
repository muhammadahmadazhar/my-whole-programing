i=0
while (True):
    if i<10:
        i = i + 1
        continue # means forget next and return to while statement
    print(i,end=" ")
    if i==40:
        break
    i = i +1