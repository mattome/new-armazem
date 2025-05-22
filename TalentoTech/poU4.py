import tkinter as tk
from tkinter import ttk
from abc import ABC, abstractmethod


# Classe abstrata Animal
class Animal(ABC):
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    @abstractmethod
    def emitir_som(self):
        pass


# Classes concretas Cachorro e Gato
class Cachorro(Animal):
    def emitir_som(self):
        return "Latido"


class Gato(Animal):
    def emitir_som(self):
        return "Miado"


# Lista global para armazenar os animais
animais = []


# Função para cadastrar um animal
def cadastrar_animal():
    nome = nome_entry.get()
    idade = idade_entry.get()
    tipo = tipo_combobox.get()

    if not nome or not idade or not tipo:
        resultado_label.config(text="Por favor, preencha todos os campos!", fg="red")
        return

    try:
        idade = int(idade)
    except ValueError:
        resultado_label.config(text="Idade deve ser um número!", fg="red")
        return

    if tipo == "Cachorro":
        animal = Cachorro(nome, idade)
    elif tipo == "Gato":
        animal = Gato(nome, idade)
    else:
        resultado_label.config(text="Tipo de animal inválido!", fg="red")
        return

    animais.append(animal)
    resultado_label.config(text="Animal cadastrado com sucesso!", fg="green")
    atualizar_lista()


# Função para atualizar a lista de animais
def atualizar_lista():
    for item in tree.get_children():
        tree.delete(item)

    for i, animal in enumerate(animais):
        tree.insert("", "end", values=(i + 1, animal.nome, animal.idade, animal.__class__.__name__, animal.emitir_som()))


# Configuração da janela principal
root = tk.Tk()
root.title("Cadastro e Lista de Animais")

# Notebook para as abas
notebook = ttk.Notebook(root)
notebook.pack(fill="both", expand=True)

# Aba Cadastro
cadastro_frame = ttk.Frame(notebook)
notebook.add(cadastro_frame, text="Cadastro")

tk.Label(cadastro_frame, text="Nome:").grid(row=0, column=0, padx=10, pady=5, sticky="w")
nome_entry = tk.Entry(cadastro_frame)
nome_entry.grid(row=0, column=1, padx=10, pady=5)

tk.Label(cadastro_frame, text="Idade:").grid(row=1, column=0, padx=10, pady=5, sticky="w")
idade_entry = tk.Entry(cadastro_frame)
idade_entry.grid(row=1, column=1, padx=10, pady=5)

tk.Label(cadastro_frame, text="Tipo:").grid(row=2, column=0, padx=10, pady=5, sticky="w")
tipo_combobox = ttk.Combobox(cadastro_frame, values=["Cachorro", "Gato"], state="readonly")
tipo_combobox.grid(row=2, column=1, padx=10, pady=5)

resultado_label = tk.Label(cadastro_frame, text="")
resultado_label.grid(row=3, columnspan=2, pady=10)

cadastrar_button = tk.Button(cadastro_frame, text="Cadastrar", command=cadastrar_animal)
cadastrar_button.grid(row=4, columnspan=2, pady=10)

# Aba Lista de Animais
lista_frame = ttk.Frame(notebook)
notebook.add(lista_frame, text="Lista de Animais")

columns = ("#", "Nome", "Idade", "Tipo", "Som")
tree = ttk.Treeview(lista_frame, columns=columns, show="headings")
tree.heading("#", text="#")
tree.heading("Nome", text="Nome")
tree.heading("Idade", text="Idade")
tree.heading("Tipo", text="Tipo")
tree.heading("Som", text="Som")
tree.pack(fill="both", expand=True)

# Executando a aplicação
root.mainloop()
