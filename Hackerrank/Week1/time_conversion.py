def timeconversion(s):
    rem_time=s[:-2]
    ampm=s[-2:]
    hrs,min,sec=rem_time.split(':')
    hours=int(hrs)
    if ampm=='PM' and hours!=12:
        hours+=12
    elif ampm=='AM' and hours==12:
        hours=0
    hrs_24=f"{hours:02d}"
    return f"{hrs_24}:{min}:{sec}"
s=input()
print(timeconversion(s))