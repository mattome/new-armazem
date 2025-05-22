class Veiculo:
    def __init__(self, marca, modelo, ano, velocidade):
        self.__marca=marca
        self.__modelo=modelo
        self.__ano=ano
        self.__velocidade=velocidade
        self.movendo= False
    def mover(self):
        if not self.movendo:
            self.movendo= True
            return f"Veiculo da {self.marca} do modelo {self.modelo} do ano {self.ano}, esta se movendo a {self.velocidade}km/h."
        return "O veiculo esta se movendo."
    def parar(self):
        if self.movendo:
            self.movendo=False
            return f"Veiculo da {self.marca} do modelo {self.modelo} do ano {self.ano}, não esta se movendo a {self.velocidade}km/h."
        return "O veiculo não esta se movendo."

class Motor:
    def __init__(self, tipo, potencia):
        self.__tipo = tipo
        self.__potencia = potencia
        self.ligado = False
    def ligar(self):
        if not self.ligado:
            self.ligado = True
            return f"Motor {self.tipo} de {self.potencia} CV ligado."
        return "Motor já está ligado."
    def desligar(self):
        if self.ligado:
            self.ligado = False
            return f"Motor {self.tipo} de {self.potencia} CV desligado."
        return "Motor já está desligado."

class Carro(Veiculo):
    def __init__(self, marca, modelo, ano, velocidade, motor, numero_de_portas):
        self.__motor = motor
        self.__numero_de_portas=numero_de_portas
    def  abrir_porta(self, porta):
        if 1 <= porta <= self.numero_de_portas:
            return f"Porta {porta} do {self.marca} esta aberta."
        return "Número de porta inválido."
        
# Teste
veiculo = Veiculo("Audi", "RS6 Avant", 2015, 250)
motor_v8 = Motor("V8", 630)
carro = Carro("Audi", "RS6 Avant", 2015, 250, motor_v8, 4)

print(veiculo.mover())
print(veiculo.parar())
print(carro.motor.ligar())
print(carro.abrir_porta(1))
print(carro.motor.desligar())