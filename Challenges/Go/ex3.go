package main

import "fmt"
import "os"
import "crypto/md5"
import "bytes"

func main(){
        if len(os.Args) != 2{
                fmt.Println("Usage: ./prog input")
                fmt.Println("Hint: ./prog -h")
        }else if os.Args[1] == "-h"{
                fmt.Println("Hashes go great with eggs.")
        }else{
                sum1 := md5.Sum([]byte(os.Args[1]))
                bytes1 := sum1[0:len(sum1)]
                sum2 := [16]byte{27, 194, 155, 54, 246, 35, 186, 130, 170, 246, 114, 79, 211, 177, 103, 24}
                bytes2 := sum2[0:len(sum2)]
                if bytes.Compare(bytes1, bytes2) == 0{
                        fmt.Println("Score!")
                }else{
                        fmt.Println("Fail!")
                }
        }
}
