#Khai báo các thư viện
import matplotlib.pyplot as plt
import numpy as np
import sympy as sp

#câu 1a
print('Câu 1a')
fx = lambda x: 507*x**2 - 507*2*x + 507 #Định nghĩa hàm số f(x) là hàm ẩn danh (dùng từ khóa lambda)
print('f(0) = ', fx(0)) #Tính và in ra giá trị của f(x) khi x = 0      
print('f(1) = ', fx(1)) #Tính và in ra giá trị của f(x) khi x = 1
print('f(507) = ', fx(507)) #Tính và in ra giá trị của hàm số f(x) khi x = 507

#câu 1b
print('\nCâu 1b')
gx = lambda x: -507*x**2 + 507**2*x + 507 #Định nghĩa hàm số g(x) là hàm ẩn danh
print('g(0) = ', gx(0)) #Tính và in ra giá trị của g(x) khi x=0
print('g(1) = ', gx(1)) #Tính và in ra giá trị của g(x) khi x=1
print('g(507) = ', gx(507)) #Tính và in ra giá trị của g(x) khi x = 507

#câu 1c
#Vẽ đồ thị hàm số f(x)
xlist = np.linspace(-200, 400, 1000) #Tạo mảng gồm tập hợp hoành độ của f(x)
ylist = list(map(fx, xlist)) #Tạo mảng gồm tập hợp tung độ của f(x)
plt.plot(xlist, ylist, color = 'red', label = 'Đồ thị hàm số f(x)') #Vẽ đồ thị hàm số f(x), màu đỏ, có nhãn
                                                                    
#Vẽ đồ thị hàm số g(x)
xlist = np.linspace(-200, 400, 1000) #Tạo mảng gồm tập hợp hoành độ của g(x)
ylist = list(map(gx, xlist)) #Tạo mảng gồm tập hợp tung độ của g(x)
plt.plot(xlist, ylist, color='blue', label = 'Đồ thị hàm số g(x)') #Vẽ đồ thị hàm số g(x), màu xanh dương, có nhãn                                                                  #Đồ thị g(x) được vẽ với màu xanh dương, nhãn "Đồ thị hàm số g(x)"

#Vẽ giao điểm của f(x) và g(x)
x = sp.symbols('x') #Khai báo biến biểu tượng x (thư viện sympy)
f_x = 507*x**2 - 507*2*x + 507 #Khởi tạo hàm số f(x) kiểu biểu tượng
g_x = -507*x**2 + 507**2*x + 507 #Khởi tạo hàm số g(x) kiểu biểu tượng

#Tìm giao điểm của f(x) và g(x) 
x_giao_diem = sp.solve(f_x - g_x) #Nghiệm của phương trình là tập hợp tung độ của giao điểm             
y_giao_diem = list(map(fx, x_giao_diem)) #y_giao_diem là tập hợp hoành độ của giao điểm
plt.plot(x_giao_diem, y_giao_diem, 'k.', label = 'Giao điểm f(x) và g(x)') #vẽ giao điểm là điểm màu đen

plt.title('Câu 1c Đồ thị hàm số f(x), g(x) và giao điểm f(x), g(x)') #Đặt tiêu đề cho hình vẽ
plt.legend() #Hiển thị chú giải chú thích cho đồ thị
plt.grid() #Hiển thị lưới
plt.show() #Hiển thị đồ thị

#Câu 1d
#Vẽ đồ thị hàm số f(x)
xlist = np.linspace(-0.75, 4, 1000) #Tạo mảng gồm tập hợp hoành độ của đồ thị f(x)
ylist = list(map(fx, xlist)) #Tạo mảng gồm tập hợp tung độ của đồ thị f(x)
plt.plot(xlist, ylist, color = 'red', label = 'Đồ thị hàm số f(x)')#vẽ đồ thị hàm số f(x)

#khởi tạo fx3 là hàm ẩn danh, fx3 là hàm f(x) sau khi bị kéo giãn theo chiều ngang hệ số 3
fx3 = lambda x: 507*(x/3)**2 - 507*2*(x/3) + 507 
xlist = np.linspace(-0.75, 4, 1000) #tạo tập hợp hoành độ của fx3
ylist = list(map(fx3, xlist)) #tạo tập hợp tung độ của fx3
plt.plot(xlist, ylist, color = 'blue', label = 'Đồ thị hàm số f(x) bị kéo giãn theo chiều ngang hệ số 3') #vẽ fx3 

#tìm giao điểm của 2 đồ thị
#đồ thị f(x) bị kéo dãn theo chiều ngang hệ số 3 ta thay x = x/3 vào f(x) được hàm số kéo dãn theo hệ số 3
f_x3 = 507*(x/3)**2 - 507*2*(x/3) + 507 #khởi tạo f_x3 là hàm fx sau khi kéo giãn theo chiều ngang hệ số 3
x_giao_diem = sp.solve(f_x - f_x3) #nghiệm của phương trình là tập hợp tung độ của các giao điểm
y_giao_diem = list(map(fx, x_giao_diem))#tạo mảng tập hợp tung độ giao điểm với mỗi hoành độ vừa tìm được
plt.plot(x_giao_diem, y_giao_diem, 'k.', label= 'Giao điểm của 2 đồ thị') #in giao điểm đồ thị 
plt.title('Câu 1d vẽ f(x) và f(x) bị kéo giãn theo chiều ngang hệ số 3') #in tiêu đề đồ thị
plt.legend() #Hiển thị chú giải chú thích cho đồ thị
plt.grid() #Hiển thị lưới
plt.show() #Hiển thị đồ thị

#câu 1e
#Vẽ đồ thị hàm số f(x)
xlist = np.linspace(-200, 400, 1000) #Tạo mảng gồm tập hợp hoành độ đồ thị f(x)
ylist = list(map(fx, xlist)) #Tạo mảng gồm tập hợp tung độ của f(x)
plt.plot(xlist, ylist, color = 'green', label = 'Đồ thị hàm số f(x)') #Vẽ đồ thị hàm số f(x), màu xanh lá, có nhãn
                                                                    
#Vẽ đồ thị hàm số g(x)
xlist = np.linspace(-200, 400, 1000) #Tạo mảng gồm tập hợp hoành độ của các điểm thuộc đồ thị g(x)
ylist = list(map(gx, xlist)) #Tạo mảng gồm tập hợp tung độ của g(x).
plt.plot(xlist, ylist, color='blue', label = 'Đồ thị hàm số g(x)') #Vẽ đồ thị hàm số g(x), màu xanh dương, có nhãn                                                                  #Đồ thị g(x) được vẽ với màu xanh dương, nhãn "Đồ thị hàm số g(x)"

#Vẽ giao điểm của f(x) và g(x)
x = sp.symbols('x') #Khai báo biến biểu tượng x (thư viện sympy)
f_x = 507*x**2 - 507*2*x + 507 #Khởi tạo hàm số f(x) kiểu biểu tượng
g_x = -507*x**2 + 507**2*x + 507 #Khởi tạo hàm số g(x) kiểu biểu tượng

#Giải phương trình hoành độ giao điểm của f(x) và g(x)
x_giao_diem = sp.solve(f_x - g_x) #Nghiệm của phương trình là các tung độ của giao điểm             
y_giao_diem = list(map(fx, x_giao_diem)) #y_giao_diem là tập hợp các hoành độ của giao điểm
print('\nCâu 1e: In tọa độ các giao điểm:')
for i in range(len(x_giao_diem)):
    print(f'Tọa độ giao điểm thứ {i+1} là ({x_giao_diem[i]}, {y_giao_diem[i]})')
#Vẽ giao điểm của f(x) và g(x) là chấm tròn màu đỏ
plt.plot(x_giao_diem, y_giao_diem,'ro',label = 'Giao điểm f(x) và g(x)') #in giao điểm

plt.title('Câu 1e: Đồ thị hàm số f(x), g(x) và giao điểm f(x), g(x)')#in tiêu đề
plt.legend() #hiển thị nhãn
plt.grid()   #hiển thị lưới                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
plt.show()   #hiển thị đồ thị