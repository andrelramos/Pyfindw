import ctypes
import os

findw = ctypes.CDLL('dll/pyfindw.dll') #Import dll

#
#	Import the methods of the pyfindw.dll
#

#This class handles windows
class Window(object):

	def __init__(self, window):
		self.window = window

	def find(self): #This method return the handle number of the specified window
		findw.findWindow.restype = ctypes.c_int #findWindow method in .dll
		return findw.findWindow(self.window)
	
#This class handles the current window
class CurrentWindow():

	def title(self): #Return the title of current window
		findw.currentWindow.restype = ctypes.c_char_p #currentWindow method in .dll
		return findw.currentWindow()