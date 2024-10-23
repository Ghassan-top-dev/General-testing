cock = 1

start = 0
next = 1
newest = 0

list=[start,next]
while(cock == 1):
    limit = input("Enter max number of terms: ")

    try:
        # Try to convert the input to an integer
        value = int(limit)

        if(value < -1):
            print(f"{limit} is not a positive integer")

        else:
            if(value == 1):
                print("0")
                cock = 0


            elif(value == 2):
                print("0 1")
                cock = 0


            else:
                for i in range(2,value):
                    newest = next + start
                    list.append(newest)
                    start = next
                    next = newest
                print(*list)
                cock = 0
    except ValueError:
        # If conversion fails, it's not an integer
        print(f"{limit} is not an integer.")
