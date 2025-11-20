import pandas as pd

def top_three_salaries(employee: pd.DataFrame, department: pd.DataFrame) -> pd.DataFrame:
    df = employee.merge(
        right = department,
        how = 'inner',
        left_on = 'departmentId',
        right_on = 'id',
        suffixes = ('','_dept')
    )
    df['ranked'] = df.groupby('departmentId')['salary'].rank(method='dense',ascending=False)
    return df[df['ranked']<=3][['name','name_dept','salary']].rename(columns={'name_dept':'Department','name':'Employee'})
