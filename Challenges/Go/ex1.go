package main

import "os"
import "fmt"
import "strconv"

func main(){
	if len(os.Args) == 2 && os.Args[1] == "-h"{
		fmt.Println("Just some simple arithmetic.")
	}else if len(os.Args) != 3{
		fmt.Println("Usage: ./prog input input")
		fmt.Println("Hint: ./prog -h")
	}else{
    		a, err := strconv.Atoi(os.Args[1])
    		if err != nil{
      			fmt.Println("Error!")
      			os.Exit(3)
    		}
    		b, err := strconv.Atoi(os.Args[2])
		if err != nil{
      			fmt.Println("Error!")
      			os.Exit(3)
    		}
    		c := a + b
		if c == 1789{
			fmt.Println("Score!")
		}else{
			fmt.Println("Fail!")
		}
	}
}
