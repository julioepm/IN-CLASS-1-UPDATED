'''
Names in group:
Miguel Salazar, Julio Paveda, Jesus Rodriguez, *RJ Sundseth
Date: 24th Feb, 2019
Version: 0.0.1

'''




##
#  This module defines the Menu class.
#  Julio and I worked on this bit together.
#  RJ being project lead.
#

## A menu that is displayed in the terminal window.
#
 
class Menu :
   #JULIO DID THIS PART i converted the list to a long string and defined the function addOption.
   ## Constructs a menu with no options.
   #
   def __init__(self) :
      self._options = []
      str1 = ''.join(str(e) for e in self._options)
      
   
   ## Adds an option to the end of this menu.
   #  @param option the option to add
   #Define functions as needed for the program:
   def addOption(self, option) :
      self._options.append(option)
   
   ## Displays the menu, with options numbered starting with 1, and prompts
   #  the user for input. Repeats until a valid input is supplied.
   #  @return the number that the user supplied
   #
   #RJ DID THIS PART he defined the funtion getInput and userChoice
   # Define functions as needed for the program:
   def getInput(self) :
      done = False
      while not done :
         for i in range(len(self._options)) :
            print("%d %s" % (i + 1, self._options[i]))
    
         userChoice = int(input())
         if userChoice >= 1 and userChoice < len(self._options) :
            done = True
           
      return userChoice