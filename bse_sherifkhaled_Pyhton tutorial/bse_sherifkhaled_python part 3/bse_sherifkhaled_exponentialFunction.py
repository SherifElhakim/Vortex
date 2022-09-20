def get_power(base,pow):
    res =1
    for i in range(pow):
        res = res * base
    return res

base_num = int(input("Enter base number :"))
power_num = int(input("Enter Power :"))   

print(get_power(base_num,power_num))    

#or instead of line 10 we can use
#print(pow(base_num , power_num))