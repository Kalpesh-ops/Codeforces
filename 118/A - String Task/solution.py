s = input().lower()
vowels = "aoyeui"
res = ""
 
for char in s:
    if char not in vowels:
        res += "." + char
 
print(res)