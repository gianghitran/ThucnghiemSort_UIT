
import random
import numpy as np

#day1______________________________________________________________________________________
day_1 = sorted(np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2))

with open('data_1.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_1:
        f.write(f"{so} ")

#day 2_____________________________________________________________________________________
day_2_1=np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)
day_2 = sorted(day_2_1,reverse=True)

with open('data_2.txt', 'w') as f:
    for so in day_2:
        f.write(f"{so} ")

#day3______________________________________________________________________________________
day_3 = np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)

with open('data_3.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_3:
        f.write(f"{so} ")

         
#day4______________________________________________________________________________________
day_4 = np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)

with open('data_4.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_4:
        f.write(f"{so} ")
        
        
#day5______________________________________________________________________________________
day_5 = np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)

with open('data_5.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_5:
        f.write(f"{so} ")
        
#day6______________________________________________________________________________________
day_6 = np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)

with open('data_6.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_6:
        f.write(f"{so} ")


#day7______________________________________________________________________________________
day_7 = np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)

with open('data_7.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_7:
        f.write(f"{so} ")
        
        
#day8______________________________________________________________________________________
day_8 = np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)

with open('data_8.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_8:
        f.write(f"{so} ")
        
        
        
        
        
#day9______________________________________________________________________________________
day_9= np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)

with open('data_9.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_9:
        f.write(f"{so} ")
        
        
        
#day10______________________________________________________________________________________
day_10 = np.around(np.random.uniform(-1000000,1000000,1000000), decimals=2)

with open('data_10.txt', 'w') as f:
    # Ghi từng số trong danh sách vào file
    for so in day_10:
        f.write(f"{so} ")





        
# Thông báo ghi file thành công
print("Ghi file thanh cong!")



# fi= open('data_in.inp')
# fo= open ('data_test.out','w')
# a= fi.read()
# print (a)
# fo.write(f'{a}')