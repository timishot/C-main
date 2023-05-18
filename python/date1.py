#!/usr/bin/python3
import re

date_regex = r'^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/([12][0-9]{3})$'

dates = ['31/02/2020', '31/04/2021', '29/02/2024', '30/06/2022', '12/09/2023']

for date in dates:
    match = re.match(date_regex, date)
    if match:
        day = match.group(1)
        month = match.group(2)
        year = match.group(3)
        print(f"Valid date: {date}")
        print(f"Day: {day}")
        print(f"Month: {month}")
        print(f"Year: {year}")
        # Additional code to validate the date
        is_valid_date = False
        # Check if it is a valid date based on the month and day values
        if month in ['04', '06', '09', '11'] and day <= '30':
            is_valid_date = True
        elif month == '02':
            if day <= '28':
                is_valid_date = True
            elif day == '29' and (int(year) % 4 == 0 and (int(year) % 100 != 0 or int(year) % 400 == 0)):
                is_valid_date = True
        else:
            if day <= '31':
                is_valid_date = True
        print(f"Valid: {is_valid_date}")
    else:
        print(f"Invalid date: {date}")

