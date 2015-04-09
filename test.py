from pyfindw import *
from os import system

w = Window("Calculadora") #Calculator in portuguese
c = CurrentWindow()

print("Handle number of the calculator window: " + str(w.find()) + "\nTitle of the current window: " + c.title() + "\n\n")

system("pause")
