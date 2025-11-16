import pandas as pd

def order_scores(scores: pd.DataFrame) -> pd.DataFrame:
    scores['rank'] = scores['score'].rank(method='dense',ascending = False)
    result = scores[['score','rank']]
    result = result.sort_values(by='score', ascending=False)
    return result

## method='dense' ranks same column elements, same rank