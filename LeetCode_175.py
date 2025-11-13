import pandas as pd

def combine_two_tables(person: pd.DataFrame, address: pd.DataFrame) -> pd.DataFrame:
    answer = pd.merge(person,address,on='personId',how='left')
    answer = answer[['firstName','lastName','city','state']]
    return answer