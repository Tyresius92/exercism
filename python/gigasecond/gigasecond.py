import datetime

def add_gigasecond(birth_date):
    GIGASECOND = 1000000000
    SEC_PER_DAY = 3600 * 24
    
    delta = datetime.timedelta(GIGASECOND / SEC_PER_DAY)

    return birth_date + delta
