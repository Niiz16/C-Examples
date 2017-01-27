import sys 

print "El nombre del script: ", sys.argv[0]

num1 = int(sys.argv[1])
num2 = int(sys.argv[2])
num1f = float(sys.argv[1])
num2f = float(sys.argv[2])

print "La suma de a y b es: ", (num1 + num2) 
print "La resta de a y b es: ", (num1 - num2) 
print "La multiplicacion de a y b es: ", (num1 * num2) 
print "El exponente de a^b es: ", (num1 ** num2) 
print "La division entera de a y b es: ", (num1 // num2) 
print "La division  de a y b es: ", (num1f / num2f) 
print "El modulo de a y b es: ", (num1 % num2) 
