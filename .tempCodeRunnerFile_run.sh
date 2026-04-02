
            #!/bin/bash
            clear  # Clear the terminal screen at the start
            cd "c:\Users\yo\Documents\HOLA MUNDO"
            if [ -f tempCodeRunnerFile ]; then
                rm tempCodeRunnerFile  # Remove the old binary if it exists
            fi
            g++ -o tempCodeRunnerFile tempCodeRunnerFile.cpp
            if [ $? -eq 0 ]; then
                ./tempCodeRunnerFile
            else
                echo "Compilation failed."
            fi
            echo ""  # Add a newline for better separation
            rm "c:\Users\yo\Documents\HOLA MUNDO\.tempCodeRunnerFile_run.sh"
        