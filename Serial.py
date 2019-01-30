import time
import serial
a = serial.Serial('com2', 9600)
f = open('a.txt','r')
print("Connected")
while True:
    for x in f:
        for i in x:
            if i=='-':
                i = " "
            if i>='A' and i<='z' or i=='.' or i==" ":
                print(i,end="")
                a.write(bytes(i, 'utf-8'))
            time.sleep(1)
        
    
    
