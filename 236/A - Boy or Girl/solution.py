s = input()
distinct_count = len(set(s))
if distinct_count % 2 == 1:
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!")