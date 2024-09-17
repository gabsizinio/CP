N,M = input().split()

N = int(N)
M = int(M)

lista = input().split()

for i in range(N):
    lista[i] = int(lista[i])

lista_final = []

for i in range(N):
    if lista[i] != 0:
        lista_final.append(lista[i])

print(*lista_final[-M:])
