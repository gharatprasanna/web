import numpy as np
import matplotlib.pyplot as plt
# Generate x values
x = np.linspace(-5, 5, 100)
# Compute y values using the given function
y = np.exp(-x**2)
# Create 3D plot
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
# Plot the points with green dashed line and upward-pointing triangles
ax.plot(x, y, np.zeros_like(x), linestyle='dashed', color='green', marker='^')
# Set labels for axes
ax.set_xlabel('x')
ax.set_ylabel('f(x)')
ax.set_zlabel('z')
# Set title for the plot
ax.set_title('3D Graph of f(x) = e**-x**2')
# Show the plot
plt.show()



