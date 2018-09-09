# learncpp

Arch linux
install libs
sudo pacman -S mysql++
yaourt -S mysql-connector-c++


Compiled
g++ hello.cpp -o hello

mysql : 
g++ -Wall -I/usr/include/cppconn -o mysqlapp mysql.cpp -L/usr/lib -lmysqlcppconn

Run
./hello
