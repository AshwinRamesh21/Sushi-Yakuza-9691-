import cv2                     
import numpy as np             

face_rec = cv2.CascadeClassifier("haarcascade_frontalface_default.xml") 
image = cv2.imread('keanu_cp-2077.jpg')
grey = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)   
face = face_rec.detectMultiScale(grey ,1.3 ,5)  
for (x, y, w, h) in face:
    image = cv2.rectangle(image, (x ,y) ,(x + w, y + h),(255, 0, 0), 3) 
cv2.imwrite('Face_AB.jpg',image)    