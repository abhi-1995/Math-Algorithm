def check_power_of_3(n):
    if (1162261467 % n == 0):
        print "Yes number is power of 3"
    else:
        print "NO number is not power of 3"


n = int(raw_input())
check_power_of_3(n)
