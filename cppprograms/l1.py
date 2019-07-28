#this is a python script
#!/usr/bin/python

import sys
import json
import logging

#f = open("line1.txt","rt")
f = open("gcppd.txt","rt")
count = 0
#logging.warning('This is a debug program')
#loggig.set

#logging.basicConfig(filename='anany.txt',level=logging.DEBUG)
#scanning each debug message and extracting the json message with key as "message"
for x in f:
  i =0
  try: 
    s = json.loads(x)
    i=1
  except:
   print()    

  if i == 1 :
    dic = dict(s)
    print(dic["message"])
    count += 1

#logging.debug(count)
print(count)
#for (int i=1 
#print(f.readline(1))
#print(f.read(2))
f.close()

