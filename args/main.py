import sys

print "El nombre del script: ", sys.argv[0]
print "Numero de argumentos: ", len(sys.argv)
print "Los argumentos son: "+ str(sys.argv)

num1 = int(sys.argv[1])
num2 = int(sys.argv[2])

print "El numero 1 es: " , str(num1)
print "El numero 2 es: " , str(num2)

suma = num1 + num2
print "La suma es: " + str(suma)
