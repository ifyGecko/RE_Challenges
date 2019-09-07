#!/bin/bash

apt update && apt upgrade -y

r2pm update

git clone https://github.com/ifyGecko/RE_Challenges tmp

cd ~/RE_Challenges/tmp/Challenges/C
make all
mv *.c ~/RE_Challenges/Help/C/Source-Code
mv ex* ~/RE_Challenges/Challenges/C
mv makefile ~/RE_Challenges/Help/C/Source-Code
cd ~/RE_Challenges/tmp/Help/C
mv *.docx ~/RE_Challenges/Help/C

cd ~/RE_Challenges/tmp/Challenges/C++
make all
mv *.cpp ~/RE_Challenges/Help/C++/Source-Code
mv ex* ~/RE_Challenges/Challenges/C++
mv makefile ~/RE_Challenges/Help/C++/Source-Code
cd ~/RE_Challenges/tmp/Help/C++
mv *.docx ~/RE_Challenges/Help/C++

cd ~/RE_Challenges/tmp/Challenges/Go
make all
mv *.go ~/RE_Challenges/Help/Go/Source-Code
mv ex* ~/RE_Challenges/Challenges/C
mv makefile ~/RE_Challenges/Help/Go/Source-Code
cd ~/RE_Challenges/tmp/Help/Go
mv *.docx ~/RE_Challenges/Help/Go

awk 'FNR==NR{a[$0];next}!($0 in a)' ~/RE_Challenges/set-up.sh ~/RE_Challenges/tmp/set-up.sh | /bin/bash

mv ~/RE_Challenges/tmp/set-up.sh ~/RE_Challenges
mv ~/RE_Challenges/tmp/update.sh ~/RE_Challenges
mv ~/RE_Challenges/tmp/remove.sh ~/RE_Challenges

rm -rf ~/RE_Challenges/tmp
