#Câu 3
#khai báo các thư viện
import matplotlib.pyplot as plt
import numpy as np
import sympy as sp

#Câu 3a
x = sp.symbols('x') #khai báo x là là biến biểu tượng đại diện cho kí hiệu x
fx = 507*x**2 - 507*2*x + 507 #Khởi tạo fx là hàm số phụ thuộc biến biểu tượng x
dfx = sp.diff(fx, x) #Tính đạo hàm của hàm số fx lưu vào dfx
slope =dfx.subs(x,2) #Tính giá trị đạo hàm của fx tại x = 2 bằng hàm subs
y_tangentline = slope*(x-2) + fx.subs(x, 2) #khởi tạo phương trình tiếp tuyến dựa vào giá trị tìm được ở trên

#Vẽ hàm số fx
xlist = np.linspace(-13,15,400) #tạo mảng chứa hoành độ của fx
ylist = list(xlist) #khởi tạo ylist cùng kiểu, cùng số phần tử với xlist
for i in range(0, len(xlist)): #biến i chạy đến từng phần tử của mảng xlist
    ylist[i] = (fx.subs(x, xlist[i])) #khởi tạo mảng chứa tung độ của fx
plt.plot(xlist, ylist, label ='Đồ thị hàm số f(x)') #vẽ fx bằng hàm plot của matplotlib, thêm nhãn
#vẽ đường tiếp tuyến
for i in range(0, len(xlist)): #cho biến i chạy đến từng phần tử của mảng
    ylist[i] = y_tangentline.subs(x, xlist[i]) #tạo mảng chứa tung độ của tiếp tuyến
plt.plot(xlist, ylist, label = 'Đường tiếp tuyến') #vẽ tiếp tuyến bằng hàm plot của matplotlib
print('Câu 3a: Công thức đường tiếp tuyến của f(x) là: y = ',y_tangentline) #in công thức đường tiếp tuyến ra màn hình
#vì qua 1 tiếp điểm chỉ vẽ được một tiếp tuyến nên ta dùng plt.plt để vẽ theo đề
plt.plot(2, 507,'r.', label =' Tiếp điểm') #vẽ giao điểm (đề cho (0, 507))
plt.title('Câu 3a: hàm số f(x) và tiếp tuyến đi qua tiếp điểm (2, 507)')
plt.legend() #hiển thị nhãn
plt.grid() #hiển thị lưới
plt.show() #hiển thị đồ thị

#Câu 3b: tìm và in ra tất cả các đường tiếp tuyến của f(x) trong trường hợp các đường này đi qua (0, -507)
#bước 1: đường thẳng d đi qua điểm A(0,-507) có dạng y = k*(x-xA) +yA   (1)
#bước 2: d tiếp xúc với f(x) khi hệ sau có nghiệm
#  { f(x) = k * (x-xA) + yA   <=> { f(x) = f'(x)*(x-xA) + yA  =>k
#  {f'(x) = k                     { f'(x) =k
#bước 3: tìm được bao nhiêu k thì có bao nhiêu tiếp tuyến
#thế k vào phương trình (1) viết tiếp tuyến 
nghiem = sp.solve(fx - dfx*x +507) #ta tìm được 2 nghiệm. nếu muốn linh hoạt ta dùng lệnh for để chạy từng nghiệm và in kết quả
gt1 = dfx.subs(x, nghiem[0])*x - 507 #thế nghiệm vào fx để tính k và viết phương trình dựa vào (1)
gt2 = dfx.subs(x, nghiem[1])*x -507 #gt2 là giao tuyến thứ 2

print('\nCâu 3b')
print('Giao tuyến thứ nhất: y =', gt1) #in giao tuyến 1
print('Giao tuyến thứ hai: y= ', gt2) #in giao tuyến 2
def vedothi(f_x, c):  #tạo hàm vẽ đồ thị với tham số là đồ thị cần vẽ và nhãn của đồ thị
    xlist = np.linspace(-4, 10, 300) #tạo mảng hoành độ của đồ thị
    ylist = list(xlist) #khởi tạo mảng tung độ có cùng kiểu, cùng số phần tử với mảng xlist
    for i in range(len(xlist)): #cho chạy đến từng phần tử thứ i của mảng xlist
        ylist[i] = f_x.subs(x, xlist[i])  #tạo mảng tung độ của đồ thị
    #vì đồ thị có kích thước rất nhỏ dùng phương thức plt.ylim(a,b) với a là giới hạn trên của trục Oy b là giới hạn dưới của Oy
    plt.ylim(-7000, 15000)  #giới hạn trục Oy để nhìn rõ phần giao tuyến của đồ thị 
    plt.title('Đồ thị f(x) và giao tuyến vẽ với matplotlib') #in tiêu đề của đồ thị.
    plt.plot(xlist, ylist, label =c) #vẽ đồ thị với nhãn và tọa độ đã được khởi tạo
    plt.legend() #hiển thị nhãn
    plt.grid() #hiển thị lưới
vedothi(fx,'Đồ thị hàm số f(x)') #vẽ f(x)
vedothi(gt1,'Giao tuyến thứ nhất') # vẽ giao tuyến thứ nhất
vedothi(gt2,' Giao tuyến thứ hai') #vẽ giao tuyến thứ hai
plt.plot(0, -507, 'ro', label = 'điểm (0, -507)') #vẽ điểm đề cho (0, -507) là chấm tròn màu đỏ
plt.legend() #hiển thị nhãn
plt.show() #hiển thị đồ thị
#vẽ đồ tbằng thư viện sympy, cách này nhanh nhưng không thể chú thích đồ thị 1 cách linh hoạt
#sp.plot(fx, gt1, gt2,(x,-5,5)) #trong đó: fx, gt1, gt1, gt2 là các đồ thị cần vẽ, x là biến biểu tượng, -5, 5 là khoảng của x