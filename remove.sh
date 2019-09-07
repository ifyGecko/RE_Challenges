#!/bin/bash

r2pm -u r2dec

r2pm -u r2ghidra-dec

apt remove gccgo pkg-config libssl-dev bc libreoffice python3-venv cmake bison -y

apt autoremove -y

cd ~/

rm -rf ~/ghidra_9.0.4

rm -rf ~/GdbShellPipe

rm -rf ~/radare2

rm -rf ~/peda

rm -rf ~/RE_Challenges
