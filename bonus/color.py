#!/bin/python3
while True:
    try:print(input().replace('X', '\x1B[91;49mX\x1B[0m').replace('o', '\x1B[36;49mo\x1B[0m').replace('*', '\x1B[31;49m*\x1B[0m'))
    except:break
