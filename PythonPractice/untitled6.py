import numpy

from numpy import dot



def gauss(a,b):

    n = len(b)

    for i in range(0,n-1):

        for j in range(i+1,n):

            print (a[j,i])

            if a[j,i] != 0.0:

                lam = float(a[j,i])/a[i,i]

                a[j,(i+1):n] = a[j,(i+1):n] - lam*a[i,(i+1):n]

                b[j] = b[j] - lam*b[i]

    for k in range(n-1,-1,-1):

        b[k] = (b[k] - dot(a[k,(k+1):n],b[(k+1):n]))/a[k,k]

    result = b

    return result



x = numpy.matrix([[2,1,-1],[-3,-1,2],[-2,1,2]],dtype = numpy.float)

aa = numpy.matrix([[2,1,-1],[-3,-1,2],[-2,1,2]], dtype = numpy.float)

y = numpy.array([8,-11,-3],dtype = numpy.float)

bb = numpy.array([8,-11,-3], dtype = numpy.float)

c = gauss(aa,bb)
print (c)