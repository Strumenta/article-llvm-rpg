# A tutorial on how to write a compiler using LLVM

This is the companion repository to the article at https://tomassetti.me/a-tutorial-on-how-to-write-a-compiler-using-llvm/.

The project requires the LLVM librariaries installed  see https://llvm.org/docs/GettingStarted.html#getting-started-with-llvm.
  
## Project Structure
```
.
├── bin           
│   └── antlr-4.8-complete.jar   // ANTLR4 tool
|
├── rpgle           
│   └── CALCFIB.rpgle   // Sample RPG file
├── src             
│   ├── antlr           // ANTLR4 grammar files
│   ├── generated       // ANTLR4 generated parser/lexer
│   └── rpg             // C++ source code
│      
└── CMakeLists.txt      // CMake file
```

## Compile and run
CMake
```
article-llvm-rpg$ cmake .
```
Build the project  
```
article-llvm-rpg$ make -j2 
```
Run the sample
```
article-llvm-rpg$ ./rpg rpgle/CALCFIB.rpgle 
```

## Generate parser and lexer
The  ANTLR4 lexer and parser are already included in the source code, the antlr .jar file required 
to is available in the bin directory. 
To re generate the lexer and the parser:
```
article-llvm-rpg$ java -cp ./bin/antlr-4.8-complete.jar org.antlr.v4.Tool -Dlanguage=Cpp -listener -visitor -o src/generated/ -Xexact-output-dir -package antlrcpprpg src/antlr/RpgLexer.g4 src/antlr/RpgParser.g4
```
