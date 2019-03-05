'''
Names in group:
Miguel Salazar, Julio Paveda, Jesus Rodriguez, *RJ Sundseth
Date: 24th Feb, 2019
Version: 0.0.1

'''




##
#   This program tests the Menu class.
#   This bit of the program is from the book. Our group isn't about
#   re-inventing the wheel. None of us came up with this bit
#

from menu import Menu

mainMenu = Menu()
mainMenu.addOption("Open new account")
mainMenu.addOption("Log into existing account")
mainMenu.addOption("Help")
mainMenu.addOption("Quit")
choice = mainMenu.getInput()
print("Input:", choice)
