from abc import ABC, abstractmethod
import random

class Pagamento(ABC):
    @abstractmethod
    def processar_pagamento(self, valor):
        pass

class PagamentoCartao(Pagamento):
    def __init__(self, numero_cartao):
        self.numero_cartao = numero_cartao
    def validar_cartao(self):
        return len(self.numero_cartao) == 16 and self.numero_cartao.isdigit()
    def processar_pagamento(self, valor):
        if self.validar_cartao():
            print(f"Pagamento de R${valor:.2f} processado com cartão de crédito com número {self.numero_cartao}.")
        else:
            print("Número do cartão inválido. Não foi possível processar o pagamento.")

class PagamentoBoleto(Pagamento):
    def __init__(self, codigo_barras=None):
        self.codigo_barras = codigo_barras or self.gerar_boleto()
    def gerar_boleto(self):
        return ''.join([str(random.randint(0, 9)) for _ in range(44)])
    def processar_pagamento(self, valor):
        print(f"Pagamento de R${valor:.2f} processado com boleto de {self.codigo_barras}.")
        
#Teste
cartao = PagamentoCartao("1234567812345678")
cartao.processar_pagamento(127.75)

boleto = PagamentoBoleto()
codigo = boleto.codigo_barras
print(f"Boleto gerado: {codigo}")
boleto.processar_pagamento(210.50)