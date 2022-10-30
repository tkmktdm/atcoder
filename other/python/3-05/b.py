x = input()
anser = "".join(sorted(x))
if (anser.islower() and anser.isalpha()):
    if (1<=len(anser)<=200000):
        print(anser)

