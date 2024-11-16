import numpy as np
import matplotlib.pyplot as plt
# Generate a random array of 50 integers between 1 and 100
random_data = np.random.randint(1, 101, size=50)
# Set up the figure
plt.figure(figsize=(12, 6))
# Line Chart
plt.subplot(1, 2, 1)
plt.plot(random_data, color='blue', marker='o', linestyle='-', markersize=5)
plt.title('Line Chart', fontsize=14)
plt.xlabel('Index', fontsize=12)
plt.ylabel('Value', fontsize=12)
plt.grid(True)
# Scatter Plot
plt.subplot(1, 2, 2)
plt.scatter(range(len(random_data)), random_data, color='green', alpha=0.7)
plt.title('Scatter Plot', fontsize=14)
plt.xlabel('Index', fontsize=12)
plt.ylabel('Value', fontsize=12)
# Adjust layout to prevent overlap
plt.tight_layout()
plt.show()