import random

pontuacao = 0
tentativas = 0
numero_sorteado = random.randint(1,100)
i= 0

while i < 5:
    resposta = int(input('Digite o número de 1 a 100?\n'))
    if resposta == numero_sorteado:
        print('Parabéns você escolheu o número certo!')
        pontuacao = 100-(i*10)
        break
    elif resposta > numero_sorteado:
        print('O número é menor')
    else:
        print('O número é maior')
    i += 1

print(f'O número sorteado era', numero_sorteado)
print('A sua pontuação é ', pontuacao)