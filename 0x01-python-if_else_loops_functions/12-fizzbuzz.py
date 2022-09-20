def fizzbuzz():
    for i in range(1, 101):
        k = i % 5 == 0
        l = i % 3 == 0
        j = k and l
        mes = f"FizzBuzz" if j else f"Buzz" if k else f"Fizz" if l else f"{i:d}"
        print(mes, end=" ")
