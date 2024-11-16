def f(x):
    return x**2 + x
n = 10
sequence = [f(x) for x in range(1, n+1)]
print(sequence[-1])