n1 = float(input("Digite N1:"))
n2 = float(input("Digite N2:"))
op = input("Digite a operacao:")
calculo = 0
if op == "+":
    calculo = n1 + n2
    print ("Resultado:{calculo}")

elif op == "-":
    calculo = n1 - n2
    print (f"Resultado:{calculo}")

elif op == "*":
    calculo = n1 * n2
    print (f"Resultado:{calculo}")

elif op == "/":
    calculo = n1 / n2
    print (f"Resultado:{calculo}")

else:
    print("operacao invalida ")