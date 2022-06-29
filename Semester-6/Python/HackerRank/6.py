def is_leap(year):
    leap = False

    return year % 4 == 0 and (year % 400 == 0 or year % 100 != 0)


# year = int(input())
year = 2000
print(is_leap(year))
