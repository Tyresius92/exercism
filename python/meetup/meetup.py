import datetime, calendar

class MeetupDayException(Exception):
    pass

FIRST = '1st'
SECOND = '2nd'
THIRD = '3rd'
FOURTH = '4th'
FIFTH = '5th'
LAST = 'last'
TEENTH = 'teenth'

days = {'Monday': 0,
        'Tuesday': 1,
        'Wednesday': 2,
        'Thursday': 3,
        'Friday': 4,
        'Saturday': 5,
        'Sunday': 6}

def get_week_start_date(year, month, which):
    if which == FIRST:
        date_of_week = 1
    elif which == SECOND:
        date_of_week = 8
    elif which == THIRD:
        date_of_week = 15
    elif which == FOURTH:
        date_of_week = 22
    elif which == FIFTH:
        date_of_week = 29
    elif which == TEENTH:
        date_of_week = 13
    elif which == LAST:
        date_of_week = calendar.monthrange(year, month)[1] - 6
    else:
        raise MeetupDayException("Invalid 'which' argument.")

    try: 
        return datetime.date(year, month, date_of_week)
    except:
        raise MeetupDayException("Nonexistent date.")

def meetup_day(year, month, day_of_the_week, which):
    date_of_week = get_week_start_date(year, month, which)
    day_code = days[day_of_the_week]
    
    day_offset = day_code - date_of_week.weekday()    
    if day_offset < 0:
        day_offset += 7

    return date_of_week + datetime.timedelta(day_offset)
