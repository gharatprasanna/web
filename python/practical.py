import pandas as pd
import numpy as np
import matplotlib.pyplot as pdlt
df=pd.read_csv("C:\\Users\\Prasanna\\Downloads\\hp.csv")
df
print(df.fillna(0))
df.plot(x="Age",y="Salary")
plt.show()