def f(x):
    return x**3 + 5*x
x = 1
counter = 1

while counter < 10:
    # Calculate the next term of the sequence
    x = f(x)
    counter += 1
    print("The 10th term of the sequence is", f(x))