# Cálculo de raíz, cuadrado y cubo

n = int(input("Ingrese la cantidad de números: "))

i = 1

while i <= n:
    numero = int(input("Ingrese un número entero positivo: "))

    # Validación
    while numero <= 0:
        numero = int(input("Error. Ingrese un número positivo: "))

    raiz = numero ** 0.5
    cuadrado = numero ** 2
    cubo = numero ** 3

    print(f"\nResultados para el número {numero}:")
    print(f"Raíz cuadrada: {raiz}")
    print(f"Cuadrado: {cuadrado}")
    print(f"Cubo: {cubo}\n")

    i += 1

print("Proceso finalizado")