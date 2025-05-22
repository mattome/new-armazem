""" Crie um programa em Python que gere um gráfico de dispersão para representar o
número de horas de estudo (eixo X) e a pontuação em uma prova (eixo Y). Você deve
criar pelo menos 10 pares de dados fictícios para horas de estudo e suas respectivas
pontuações. Personalize o gráfico adicionando título, rótulos nos eixos e uma grade.
Use cores diferentes para os pontos no gráfico e salve a visualização em formato
PNG. Após isso, exiba o gráfico na tela."""  

# Instalando e importando a biblioteca matplotlib para gráficos e numpy para cálculos matemáticos
import matplotlib.pyplot as plt  # Importa o módulo pyplot para criar gráficos
import numpy as np  # Importa o numpy para manipulação de arrays e cálculos matemáticos

# Dados simples
x = [5, 8, 11, 20, 25]  # Eixo X
y = [2, 4, 5, 8, 10]  # Eixo Y

# Criando o gráfico com personalizações
plt.scatter(
    x, y,                      # Dados para plotar
    color='red',               # Cor da linha
    linestyle='--',            # Estilo da linha (tracejada)
    marker='o',                # Marcador nos pontos
    markersize=8,              # Tamanho dos marcadores
    linewidth=2,               # Espessura da linha
    label='Crescimento'        # Rótulo para a legenda
)

# Adicionando título e rótulos aos eixos
plt.title('Horas de estudo e pontuação em uma prova', fontsize=16, fontweight='bold')  # Título do gráfico
plt.xlabel('Eixo X', fontsize=12)                                                      # Nome do eixo X
plt.ylabel('Eixo Y', fontsize=12)                                                      # Nome do eixo Y

# Adicionando uma grade
plt.grid(color='gray', linestyle=':', linewidth=0.5)  # Cor, estilo e espessura da grade

# Adicionando legenda
plt.legend(loc='upper left', fontsize=10)  # Define a localização e o tamanho da legenda

# Exibindo o gráfico
plt.show()

