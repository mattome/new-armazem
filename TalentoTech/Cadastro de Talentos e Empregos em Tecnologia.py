"""
Projeto: Cadastro de Talentos e Empregos em Tecnologia
Disciplina: Seminário Integrador - Talento Tech
Desenvolvido por: Matheus Tomé e Rafael Tomé
Data: 07/12/2024
Descrição:
    Este projeto simula um sistema basico para gerenciar cadastros de talentos e vagas de empregos em tecnologia
      -Permitir que profissionais registrem suas habilidades e qualificações.
      -Permitir que empresas cadastrem suas vagas, especificando as habilidades necessárias(requisitos necessários).
      -Avaliar a compatibilidade entre as habilidades dos candidatos e os requisitos das vagas.
      -Ajudar empresas a encontrar candidatos qualificados e profissionais a encontrar vagas adequadas.

Objetivos:
    Este sistema foi desenvolvido para aplicar conceitos de Programação Orientada a Objetos (POO)
    e Engenharia de Software em um contexto prático, alinhado aos objetivos do projeto Talento Tech.
"""

# Classe Profissional representa um talento no sistema
class Profissional:
    def __init__(self, habilidades):
        """
        Inicializa um profissional.
        :param habilidades: Lista de habilidades do profissional
        """
        self.habilidades = habilidades

    def verificarCompatibilidade(self, vaga):
        """
        Verifica a compatibilidade entre as habilidades do profissional e os requisitos da vaga.
        :param vaga: Objeto Vaga a ser verificado
        :return: True se compatível, False caso contrário
        """
        return all(requisito in self.habilidades for requisito in vaga.requisitos)

# Classe Vaga representa uma vaga de emprego no sistema
class Vaga:
    def __init__(self, titulo, requisitos):
        """
        Inicializa uma vaga de emprego.
        :param titulo: Título da vaga
        :param requisitos: Lista de habilidades necessárias para a vaga
        """
        self.titulo = titulo
        self.requisitos = requisitos

    def exibirDetalhes(self):
        """
        Exibe os detalhes da vaga.
        """
        print(f'Vaga: {self.titulo}')
        print(f'Requisitos: {", ".join(self.requisitos)}')

# SIMULAÇÃO
# Criando vagas de emprego
vaga1 = Vaga("Desenvolvedor Python", ["Python", "SQL"])
vaga2 = Vaga("Analista de Dados", ["SQL", "Python"])
vaga3 = Vaga("Desenvolvedor Frontend", ["SQL", "Tableau"])
vaga4 = Vaga("Engenheiro de Software", ["C#", "Unity"])
vaga5 = Vaga("Data Scientist", ["JavaScript", "React"])

# Criando profissionais com habilidades específicas
profissional1 = Profissional(["Python", "SQL"])
profissional2 = Profissional(["Python", "Java"])
profissional3 = Profissional(["SQL", "Tableau"])
profissional4 = Profissional(["C#", "Unity"])
profissional5 = Profissional(["JavaScript"])

# Testando os cenários descritos (sem usar nomes)
print("Profissional 1 verifica a vaga 1")
vaga1.exibirDetalhes()
print(profissional1.verificarCompatibilidade(vaga1))  # True
print()

print("Profissional 2 verifica a vaga 2")
vaga2.exibirDetalhes()
print(profissional2.verificarCompatibilidade(vaga2))  # False
print()

print("Profissional 3 verifica a vaga 3")
vaga3.exibirDetalhes()
print(profissional3.verificarCompatibilidade(vaga3))  # True
print()

print("Profissional 4 verifica a vaga 4")
vaga4.exibirDetalhes()
print(profissional4.verificarCompatibilidade(vaga4))  # True
print()

print("Profissional 5 verifica a vaga 5")
vaga5.exibirDetalhes()
print(profissional5.verificarCompatibilidade(vaga5))  # False