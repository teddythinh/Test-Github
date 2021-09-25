import pyttsx3

robot_brain = "Hello Thinh handsome"

robot_speak = pyttsx3.init()
robot_speak.say(robot_brain)
robot_speak.runAndWait()