import random as rand
import timeit



dict = {1:32, 2:64, 3:128, 4:256, 5:512}
n = int(input())
length_of_dic = dict[n]




a1 = [ [ rand.randint(0,100) for i in range(0, length_of_dic) ] for j in range(0, length_of_dic) ]

a2 = [ [ rand.randint(0,100) for k in range(0, length_of_dic) ] for l in range(0, length_of_dic) ]

array = [ [ 0 for p in range(0, length_of_dic) ] for q in range(0, length_of_dic) ]




c1 = timeit.default_timer()


for u in range(0, length_of_dic):
    for v in range(0, length_of_dic):
        for w in range(0, length_of_dic):
            array[u][v] = array[u][v] + ( a1[u][w] * a2[w][v] )

            
c2 = timeit.default_timer()



print("Time is:", " ", c2 - c1)
