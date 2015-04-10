# Pyfindw
Python module for the manipulation of window in Windows OS / Módulo python para a manipulação de janelas no Windows

# -- Portugues --

#O que é?
Durante o desenvolvimento de algumas ferramentas em python, me deparei com a necessidade de procurar janelas ativas no windows, infelizmente não encontrei nenhum tutorial sobre o assunto, então decidi eu mesmo criar o meu próprio módulo python para isso.
Por enquanto o Pyfindw conta apenas com duas funções: 
Pegar o handle de uma janela windows, e capturar o titulo da janela atualmente ativa.
  
#Como Usar:
Depois de ter efetuado o Download Aqui, Extraia e mova todos os arquivos que estão dentro da pasta Pyfindw-master, para o mesmo diretório que se encontra seu script. Agora, vamos fazer um script que pega o handle da janela "Calculadora", e imprime o nome da janela atualmente ativa:

from pyfindw import * """Importando o módulo pyfindw"""

from os import system

"""Criando objeto Window para pegar o handle da janela Calculadora"""

w = Window("Calculadora") 

"""Criando objeto CurrentWindow para pegar o título da janela ativa"""

c = CurrentWindow() 

print("Handle da janela Calculadora: " + str(w.find()) + "\nTitulo da janela atualmente ativa: " + c.title() + "\n\n")

system("pause")

#Colabore

Existem várias formas de  ajudar o projeto: 

Ajudar à disseminá-lo pela internet.

Ajudar a codifica-lo (Basta conhecer um pouco de C ou Python, e ter o GCC Compiler instalado em sua máquina windows)

Entrar em contato para relatar possíveis melhorias e apontar bugs.
