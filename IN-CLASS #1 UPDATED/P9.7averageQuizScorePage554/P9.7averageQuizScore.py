'''
Names in group:
Miguel Salazar, Julio Paveda, Jesus Rodriguez, *RJ Sundseth
Date: 24th Feb, 2019
Version: 0.0.1
'''

## This is the contribution primarily from Jesus and Miguel
## in collaboration with one another.
## We're hoping dividing the assignment up into twine
## is sufficient for giving credit where credit is due.

class Student():
## Miguel did this part and its the constructor where all
## the functions are intialized for later use.
    def __init__(self,name,score,quizzes,avg):
        self.name = name
        self.score = score
        self.quizzes = quizzes
        self.avg = avg

    ## Define functions as needed for the program:

    ##Miguel did this function and the purpose of this function
    ##is to get a name and return a name in the output
    def getName(self):
        return self.name
    
    ##Jesus did this function. The purpose of this function
    ##is to get a score and return a score.
    def totalQuizScore():
        return self.score

    ##Miguel did this and the purpose of this function is to add
    ##a score to the already determined score from the constructor.
    def addQuiz(self, score):
        self.score = int(self.score + score)

    ##Jesus did this part and the purpose of this function
    ##is to get the average score by adding the original score by the
    ##input scores and then dividing by total quizzes.
    def getAverageScore(self, score):
        self.score = int(self.score + score) / self.quizzes


## result:

##Miguel did this and this is just creating the student with a score
##and number of quizzes.
steven = Student('Steven', 90, 2, 0)

##Jesus did all four of these things and the purpose of this is to first
##get steven totalQuizScore and then print his name and score.
##The final part calls an instance of the function addQuiz to add a score
##to the current score.
steven.totalQuizScore
print(steven.name)
print("Score of ", steven.score)
steven.addQuiz(90)

##Both Miguel and Jesus did these four parts where the first line of code
##prints steven's name again and then prints the score after the previous
##Quiz was added with addQuiz and then we get the average score and print
##the average score.
print(steven.name)
print("Score of ",steven.score)
steven.getAverageScore(0)
print("AVG is " , steven.score)
