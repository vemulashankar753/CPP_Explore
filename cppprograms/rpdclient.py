import socket 
import sys


def main():

#sockipv6 = socket.socket(socket.AF_INET6,socket.SOCK_STREAM,0)
 sockipv6 = socket.socket(socket.AF_INET6,socket.SOCK_STREAM,0)
 sockipv6.connect(("2001:558:ff3f:526::1:2", 8190,0,0))
 print("socket is connected")
# lin = [0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,"this is shankar vemula",1]
 msg = '0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,"this is shankar vemula",1'
 sockipv6.sendall(msg)
 print("data is sent")

if __name__ == '__main__':
   main()
