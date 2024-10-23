word = input().split(" ")
a = list(dict.fromkeys(word))

for i in range(len(a)):
    print(a[i], ": ", word.count(a[i]))
