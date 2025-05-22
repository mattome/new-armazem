import random

p = 0
tent = 0
numero_aleatorio = random.randint(1, 100)

while tent < 5: 
    resp = input("Digite o número de 1 a 100: ")
    
    
    if resp.isdigit():  
        resp = int(resp)
        
        if 1 <= resp <= 100:
            print(f"Você digitou: {resp}")
            
            if resp == numero_aleatorio:
                print("Parabéns! Você digitou o número certo!")
                break 
            elif resp > numero_aleatorio:
                print("O número é menor!")
            elif resp < numero_aleatorio:
                print("O número é maior!")
            
            tent += 1 
        else:
            print("Por favor, digite um número entre 1 e 100.")
    else:
        print("Entrada inválida! Por favor, digite um número inteiro entre 1 e 100.")


if tent == 5 and resp != numero_aleatorio:
    print(f"Você perdeu! O número sorteado era {numero_aleatorio}.")