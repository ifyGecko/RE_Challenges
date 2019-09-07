package main

import "os"
import "fmt"
import "strconv"

func main(){
	if len(os.Args) != 2{
		fmt.Println("Usage: ./prog input")
		fmt.Println("Hint: ./prog -h")
	}else if os.Args[1] == "-h"{
		fmt.Println("This challenge leverages loops to build a comparison string.")
	}else{
    		s := ""
    		for i := 0; i < 10; i++ {
      			s = s + strconv.Itoa(i)
    		}
		if os.Args[1] == s{
			fmt.Println("Score!")
		}else{
			fmt.Println("Fail!")
		}
	}
}
