# learning C++

Arch linux 
#### install library 
```
sudo pacman -S mysql++ 
yaourt -S mysql-connector-c++ 
```


Compiled : 
```
g++ hello.cpp -o hello 
```

mysql : 
```
g++ -Wall -I/usr/include/cppconn -o mysqlapp mysql.cpp -L/usr/lib -lmysqlcppconn 
```

wxWidgets : 
```
g++ console.cpp `wx-config --cxxflags --libs` -o console 
g++ main.cpp main.h panels.cpp panels.h communicate.cpp communicate.h `wx-config --cxxflags --libs` -o simple 
```

Run  : 
```
./hello
```
