import cv2  #Import OpenCV and NumPy before running the code

face_rec = cv2.CascadeClassifier('haarcascade_frontalface_default.xml') #Add these 2 files before you execute the code
eye_rec = cv2.CascadeClassifier('haarcascade_eye.xml')  
capture = cv2.VideoCapture(0)   

while 1: 
    ret, img = capture.read() 
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) 
    faces = face_rec.detectMultiScale(gray, 1.3, 5) 

    for (x,y,w,h) in faces:   
        cv2.rectangle(img,(x,y),(x+w,y+h),(255,255,0),2) 
        roi_gray = gray[y:y+h, x:x+w] 
        roi_color = img[y:y+h, x:x+w] 
        eyes = eye_rec.detectMultiScale(roi_gray)  

        for (ex,ey,ew,eh) in eyes: 
            cv2.rectangle(roi_color,(ex,ey),(ex+ew,ey+eh),(0,127,255),2) 

    cv2.imshow('img',img) 

    k = cv2.waitKey(30) & 0xff
    if k == 27: 
        break
  
capture.release()  
cv2.destroyAllWindows() 