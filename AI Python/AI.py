import speech_recognition
import pyttsx3
from datetime import date, datetime

robot_ear = speech_recognition.Recognizer()
robot_speak = pyttsx3.init()
robot_brain = ""

while True:

    with speech_recognition.Microphone() as mic:
        robot_ear.adjust_for_ambient_noise(mic) 
        print("Robot: I'm listening")
        audio = robot_ear.listen(mic)

    try:
        you = robot_ear.recognize_google(audio)
    except:
        you = ""

    print("You: " + you)

    if you == "":
        robot_brain = "Robot: Sorry, I can't hear you, please speak again" 
    elif "hello" in you:
        robot_brain = "Hello Thinh handsome"
    elif "today" in you:
        today = date.today()
        robot_brain = today.strftime("%B %d, %Y")
    elif "time" in you:
        now = datetime.now()
        robot_brain = now.strftime("%H hours %M minutes %S seconds")
    elif "president" in you:
        robot_brain = "Nguyen Xuan Phuc"
    elif "bye" in you:
        robot_brain = "Good bye"
        print("Robot: " + robot_brain)
        robot_speak.say(robot_brain)
        robot_speak.runAndWait()
        break

    print("Robot: " + robot_brain)
    robot_speak.say(robot_brain)
    robot_speak.runAndWait()