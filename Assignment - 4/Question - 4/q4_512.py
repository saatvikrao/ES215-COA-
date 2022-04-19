import random
import time

N = 512

print("Taking N = 128 ...")

a = []; b = []; # input matrices
c = []  # resultant matrix

### (i, j, k)

for i in range(N):
    ar1 = []; ar2 = []; ar3 = [];
    for j in range(N):
        ar1.append(random.randint(-1000000,1000000)*0.2)
        ar2.append(random.randint(-1000000,1000000)*0.2)
        ar3.append(0)

    a.append(ar1); b.append(ar2); c.append(ar3)

startTime = time.time()

for i in range(N):
    for j in range(N):
        sum = 0
        for k in range(N): sum += a[j][k] * b[k][i]
        c[i][j] = sum

endTime = time.time()

print("Ex. time for (i, j, k) : ", endTime - startTime)



### (i, k, j)
a = []; b = []; c = [];

for i in range(N):
    ar1 = []; ar2 = []; ar3 = [];

    for j in range(N):
        ar1.append(random.randint(-1000000,1000000)*0.2) 
        ar2.append(random.randint(-1000000,1000000)*0.2)
        ar3.append(0);

    a.append(ar1); b.append(ar2); c.append(ar3)

startTime2 = time.time()

for i in range(N):
    for k in range(N):
        sum = 0

        for j in range(N): sum += a[j][k] * b[k][i]

        c[i][j] = sum

endTime2 = time.time()

print("Ex. time for (i, k, j) : ", endTime2 - startTime2)



### (j, i, k)
a = []; b = []; c = [];

for i in range(N):
    ar1 = []; ar2 = []; ar3 = [];

    for j in range(N):
        ar1.append(random.randint(-1000000,1000000)*0.2)
        ar2.append(random.randint(-1000000,1000000)*0.2)
        ar3.append(0)

    a.append(ar1); b.append(ar2); c.append(ar3)

startTime3 = time.time()

for j in range(N):
    for i in range(N):
        sum = 0

        for k in range(N): sum += a[j][k] * b[k][i]

        c[i][j] = sum

endTime3 = time.time()

print("Ex. time for (j,i,k) : ", endTime3 - startTime3)



### (j, k, i)
a = []; b = []; c = [];

for i in range(N):
    ar1 = []; ar2 = []; ar3 = [];

    for j in range(N):
        ar1.append(random.randint(-1000000,1000000)*0.2)
        ar2.append(random.randint(-1000000,1000000)*0.2)
        ar3.append(0)

    a.append(ar1); b.append(ar2); c.append(ar3)

startTime4 = time.time()

for j in range(N):
    for k in range(N):
        sum = 0

        for i in range(N): sum += a[j][k] * b[k][i]

        c[i][j] = sum

endTime4 = time.time()

print("Ex. time for (j, k, i) : ", endTime4 - startTime4)



### (k, i, j)
a = []; b = []; c = [];

for i in range(N):
    ar1 = []; ar2 = []; ar3 = [];

    for j in range(N):
        ar1.append(random.randint(-1000000,1000000)*0.2)
        ar2.append(random.randint(-1000000,1000000)*0.2)
        ar3.append(0)

    a.append(ar1); b.append(ar2); c.append(ar3)

startTime5 = time.time()

for k in range(N):
    for i in range(N):
        sum = 0

        for j in range(N): sum += a[j][k] * b[k][i]

        c[i][j] = sum

endTime5 = time.time()

print('Ex. time for (k, i, j) : ', endTime5 - startTime5)



### (k, j, i)
a = []; b = []; c = [];

for i in range(N):
    ar1 = []; ar2 = []; ar3 = [];

    for j in range(N):
        ar1.append(random.randint(-1000000,1000000)*0.2)
        ar2.append(random.randint(-1000000,1000000)*0.2)
        ar3.append(0)

    a.append(ar1); b.append(ar2); c.append(ar3)

startTime6 = time.time()

for k in range(N):
    for j in range(N):
        sum = 0

        for i in range(N): sum += a[j][k] * b[k][i]

        c[i][j] = sum

endTime6 = time.time()

print("Ex. time for (k, j, i) : ", endTime6 - startTime6)

