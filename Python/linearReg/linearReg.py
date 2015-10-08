import pandas as pd
import numpy as np
import statsmodels.api as sm

df_adv = pd.read_csv('mycsv.csv', index_col=0)
X = df_adv[['ell', 'meals', 'acs_k3', 'acs_46', 'growth', 'full', 'emer', 'enroll']]
y = df_adv['api00']

## fit a OLS model with intercept on TV and Radio
X = sm.add_constant(X)
est = sm.OLS(y, X).fit()

est.summary()
