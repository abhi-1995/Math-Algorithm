def primesInRange(n):
    fact = 1
    for k in range(2,n):
        if (k in [0,1]):
            print k
        else:
            fact = fact * (k-1)
            if ((fact + 1)% k == 0):
                print k

n = int(raw_input())
primesInRange(n)
