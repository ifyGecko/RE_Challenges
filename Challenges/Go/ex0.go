package main

import "os"
import "fmt"

func main(){
	if len(os.Args) != 2{
		fmt.Println("Usage: ./prog input")
		fmt.Println("Hint: ./prog -h")
	}else if os.Args[1] == "-h"{
		fmt.Println("The input you seek is hardcoded.")
	}else{
		if os.Args[1] == "password"{
			fmt.Println("Score!")
		}else{
			fmt.Println("Fail!")
		}
	}
}
