#!/bin/bash

apt update
apt install apt-transport-https -y
echo "deb https://http.kali.org/kali kali-rolling main non-free contrib" > /etc/apt/sources.list
apt update
dpkg --add-architecture i386
apt update && apt upgrade -y
apt install gccgo pkg-config libssl-dev bc libreoffice python3-venv cmake bison mingw-w64 -y

cd ~/RE_Challenges/Challenges/C
make install
cd ~/RE_Challenges/Challenges/C++
make install
cd ~/RE_Challenges/Challenges/Go
make install

git clone https://github.com/longld/peda.git ~/peda
echo "source ~/peda/peda.py" >> ~/.gdbinit

git clone https://github.com/hq6/GdbShellPipe ~/GdbShellPipe
~/GdbShellPipe/Install.sh

echo "set print asm-demangle on" >> ~/.gdbinit
echo "set disassembly-flavor intel" >> ~/.gdbinit

git clone https://github.com/radare/radare2 ~/radare2
~/radare2/sys/install.sh

r2pm init
r2pm -i r2dec
r2pm -i r2ghidra-dec

wget -O ~/ghidra.zip https://ghidra-sre.org/ghidra_9.0.4_PUBLIC_20190516.zip
unzip ~/ghidra.zip -d ~/
rm ~/ghidra.zip

wget -O ~/cutter https://github.com/radareorg/cutter/releases/download/v1.9.0/Cutter-v1.9.0-x64.Linux.AppImage
chmod +x ~/cutter
mv ~/cutter /bin

wget -O ~/veles.deb https://github.com/codilime/veles/releases/download/2018.05.0.TIF/Veles_2018.05_64bit_Ubuntu1604.deb
dpkg -i ~/veles.deb
rm ~/veles.deb

cd ~/RE_Challenges
