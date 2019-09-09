#!/bin/bash

#remove radare2 packages
r2pm -u r2dec
r2pm -u r2ghidra-dec

#remove packages installed from kali repos
apt remove gccgo pkg-config libssl-dev bc libreoffice python3-venv cmake bison mingw-w64 -y

#remove all packages that remain that are no longer needed
apt autoremove -y

#remove all manually installed tools
cd ~/
rm /bin/cutter
rm -rf ~/ghidra_9.0.4
rm -rf ~/GdbShellPipe
rm -rf ~/radare2
rm -rf ~/peda
rm -rf ~/RE_Challenges
