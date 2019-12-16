# RE_Challenges
Purpose:

    A repository of introductory exercises to practice reverse engineering with help for when you get lost.

Set-Up:

    Install Oracle virtualbox then, import the Kali Linux virtualbox ova file.
  
    1. https://www.virtualbox.org/wiki/Downloads 
    2. https://www.offensive-security.com/kali-linux-vm-vmware-virtualbox-image-download/
    
    Start the virtual machine, Username: root && Password: toor, open a terminal and run the 
    following in the window.
    
    git clone https://github.com/ifyGecko/RE_Challenges;cd RE_Challenges;chmod +x set-up.sh;./set-up.sh
    
Update:
    
    In order to update the challenges and help documents of an already cloned repo run the following command.
    
    cd ~/RE_Challenges;chmod +x update.sh;./update.sh
    
    Note: It is advised to take a snapshot of the virtual machine immediately before/after any update.
    
    https://www.virtualbox.org/manual/ch01.html#snapshots

Remove:

    To remove all files and tools associated with RE_Challenges run the following command.
    
    cd ~/RE_Challenges;chmod +x remove.sh;./remove.sh

How-To-Solve:

    The proper way to finish a challenge is to use dynamic and static analysis tools to inspect each
    challenge for the correct input(s), maybe even patch the binary, to print the "Score!" message.

TODO:

1. add/improve Go challenges
2. add/improve help files
