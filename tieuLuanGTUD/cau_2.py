#Câu 2
#Khai báo thư viện
import numpy as np
import sympy as sp
from sympy.simplify.fu import L

#Định nghĩa x là một kí hiệu biểu tượng (dùng từ khóa symbols)
x = sp.symbols('x')
#Định nghĩa fx là hàm số f(x) phụ thuộc biến biểu tượng x
fx = (x**2 - 507*x - 3*x + 507*3) / (x - 507)

#Định nghĩa hàm f_x(x) là hàm số f(x) phụ thuộc tham số x
def f_x(x):
    if (x == 507):
        return 507
    else:
        return (x**2 - 507*x - 3*x + 507*3) / (x - 507)

#Câu 2a
print('Câu 2a:')
#Dùng hàm limit của thư viện sympy để tính lim của f(x) khi x tiến đến một giá trị nào đó
print('Lim f(x) khi x tiến đến 0 là ', sp.limit(fx, x, 0)) #in lim f(x) khi x -->0
print('Lim f(x) khi x tiến đến 1 là ', sp.limit(fx, x, 1)) #in lim f(x) khi x -->1
print('Lim f(x) khi x tiến đến 509 là ', sp.limit(fx, x, 509)) #in lim f(x) khi x -->509 (509 = 507+1+1)
 
#Câu 2b   
print('\nCâu 2b:')
#So sánh f(x) khi x = 507 và Lim f(x) khi x tiến đến 507
#Tính giới hạn của hàm số f(x) khi x tiến đến 507
#ta tính giới hạn bên trái và bên phải của f(x)
liml = sp.limit(fx, x, 507, '-')
limr = sp.limit(fx, x, 507, '+')
if liml == limr:
    limfx = liml 
    #So sánh f(x) khi x = 507 và Lim f(x) khi x tiến đến 507 để đưa ra kết luận
    #nếu lim trái khác lim phải thì chương trình sẽ không chạy đến đây
    if (limfx == f_x(507)):  #nếu bằng nhau thì f(x) liên tục tại x = 507
        print("Hàm số liên tục tại 507")
    else:   #Nếu không bằng nhau thì kết luận hàm số không liên tục
        print("Hàm số không liên tục tại 507")
#câu 2c  
print("\nCâu 2c:")
#Tạo mảng arr kiểu list chứa các giá trị của đề
arr = np.arange(497, 518, 1) #Tạo mảng có giá trị [507-10, 507-9,...,507+10]
print('Các giá trị mà hàm số f(x) liên tục là:')
for i in arr: #i chạy đến từng phần tử của mảng để tính giới hạn và giá trị tại i
    limfx = sp.limit(fx, x, i) #tính giới hạn f(x) khi x = i
    if (limfx == f_x(i)): #so sánh và rút ra kết luận
        print(i) #in i nếu tại x = i f(x) liên tục