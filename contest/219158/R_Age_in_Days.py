n = int(input())

years = n // 365
rem = n % 365

months = rem // 30
days = rem % 30

print(years, "years")
print(months, "months")
print(days, "days")
