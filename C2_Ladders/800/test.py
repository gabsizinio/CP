aluno = {
    "nome": "Gabriel",
    "idade": 21,
    "Curso": "Ciência da Computação"
}

for x in aluno:
    print(f"{x}: {aluno[x]}")

print() #PULAR LINHA

for x in aluno.values():
    print(x)

print() #PULAR LINHA

for x,y in aluno.items():
    print(f"{x}: {y}")


