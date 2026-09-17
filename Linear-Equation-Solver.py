import sympy as sp

x, y, z = sp.symbols('x y z')
A = sp.Matrix([[1, -2, -1],
              [-2, 7, 5],
              [2, -3, -1]])
b = sp.Matrix([-5, -2, -14])

# Returns a finite set containing a tuple of the solution
solution = sp.linsolve((A, b), [x, y, z])
print("General Solution:")
sp.pprint(solution)
