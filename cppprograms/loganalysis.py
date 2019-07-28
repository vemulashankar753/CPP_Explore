#this is a python script
#!/usr/bin/python

import sys
import json
#fname = "sys.argv[1]"
#f = open("gcpplog.txt","rt")
f = open("line1.txt","rt")
#f.
for x in f:
#print(x)
#  print(type(x))
#  d1 = dict(x)
#  s = "x"
  s = json.loads(x)
  print(type(x))
#  print(x)
  dic = dict(s)
   
#  print(dic)
#  print(type(dic))
  print(dic["message"])

#for (int i=1 
#print(f.readline(1))
#print(f.read(2))
f.close()

