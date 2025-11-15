import pandas as pd

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    unique_vals = employee['salary'].drop_duplicates()
    sorted_vals = unique_vals.sort_values(ascending=False)
    if(N>len(sorted_vals) or N <= 0):
        return pd.DataFrame({f'getNthHighestSalary({N})':[None]})
    nth_highest = sorted_vals.iloc[N-1]
    return pd.DataFrame({f'getNthHighestSalary({N})':[nth_highest]})

