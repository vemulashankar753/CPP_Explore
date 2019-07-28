#this is a python script
#!/usr/bin/python

import sys
import json
import logging

ac=0
gnst=0

def process_msg(strmsg) :
 if "Accepted RPD connection from"  in strmsg :
   global ac
   print(type(strmsg))
   ac= ac+1
   return ac

 elif "General Notification" in strmsg :
   print("general notifcaitons in func") 
   global gnst
   process_gnst(strmsg)
#   print(strmsg)
#   print(type(strmsg))
   gnst = gnst+1
   return gnst

def process_gnst(gntf) :
#    print("notification messages are", gntf.split(';',1));
     ntype,vtype,rstr = gntf.split(';',3)
     print(ntype)
     print(vtype)
     print(rstr)
    
 
#f = open("line1.txt","rt")
def main():
 print("main program is called")
 f = open("gcppd.txt","rt")
 count = 0
 getrpd = []
 j =0
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
#    print(dic["message"])
     Msg = dic["message"]
     process_msg(Msg)
     count += 1

 print("its out of the for loop")
 print("no. of accepted connections are:{ }",ac)
 print("no. of general notifications:", gnst)
 print(count)
 f.close()

if __name__ == '__main__':
   main()


#def process_msg(strmsg) :
#   if strmsg.contains("Accepted RPD connection from"): 
#      print(strmsg)
#   return;
    
#   strmsg.slice(0:28

#  if (Msg == "accepted rpd connections)
