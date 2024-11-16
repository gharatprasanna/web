import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
df=pd.read_csv("C:\\Users\\Prasanna\\Downloads\\Iris (1).csv")
count=df.groupby(['Species']).count()
sp=df.Species.unique()
plt.pie(count['Id'],labels=sp,autopct='%1.1f%%')
plt.show()