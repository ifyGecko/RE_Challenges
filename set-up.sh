#!/bin/bash

#add 32-bit support, update list of available packages,
#upgrade pre-installed packages, and install needed packages
dpkg --add-architecture i386 #32-bit support
apt update && apt upgrade -y #update package list && upgrade pre-installed packages
apt install gccgo pkg-config libssl-dev bc libreoffice python3-venv cmake bison mingw-w64 -y 

#go to challenges directories & compile challenges from makefile
cd ~/RE_Challenges/Challenges/C
make install
cd ~/RE_Challenges/Challenges/C++
make install
cd ~/RE_Challenges/Challenges/Go
make install

#peda - python exploitation development assistant script for gdb
git clone https://github.com/longld/peda.git ~/peda
echo "source ~/peda/peda.py" >> ~/.gdbinit

#GdbShellPipe - pipe gdb output to shell commands from with in gdb
git clone https://github.com/hq6/GdbShellPipe ~/GdbShellPipe
~/GdbShellPipe/Install.sh

#enable c++ demangling and set assembly syntax to intel for gdb
echo "set print asm-demangle on" >> ~/.gdbinit
echo "set disassembly-flavor intel" >> ~/.gdbinit

#radare2 - reverse engineering framework
git clone https://github.com/radareorg/radare2 ~/radare2
~/radare2/sys/install.sh

#initialize radare2 package manager and install decompilers
r2pm init
r2pm -i r2dec
r2pm -i r2ghidra-dec

#ghidra - NSA's software reverse engineering framework
wget -O ~/ghidra.zip https://ghidra-sre.org/ghidra_9.0.4_PUBLIC_20190516.zip
unzip ~/ghidra.zip -d ~/
rm ~/ghidra.zip

#Cutter - Qt application providing radare2 with a GUI
wget -O ~/cutter https://github.com/radareorg/cutter/releases/download/v1.9.0/Cutter-v1.9.0-x64.Linux.AppImage
chmod +x ~/cutter
mv ~/cutter /bin

#Veles - visual reverse engineering tool
wget -O ~/veles.deb https://github.com/codilime/veles/releases/download/2018.05.0.TIF/Veles_2018.05_64bit_Ubuntu1604.deb
dpkg -i ~/veles.deb
rm ~/veles.deb

#end in the RE_Challenges directory
cd ~/RE_Challenges
