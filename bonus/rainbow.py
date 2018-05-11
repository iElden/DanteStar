#/bin/python3
import time

rainbow = [31, 33, 32, 34, 35]
txt = ""
try:
    while True:
        txt += input() + '\n'
except:
    pass
while True:
    for x in rainbow:
        st = txt.replace('o', "\x1B["+str(x)+";"+str(x + 10)+"mo\x1B[0m")
        st = st.replace('X', "\x1B[90;100mX\x1B[0m")
        st = st.replace('*', "\x1B[30;40m*\x1B[0m")
        print(st)
        print("\x1B[A" * (st.count('\n') + 2))
        time.sleep(0.15)
