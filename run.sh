####################
#        C++       #
####################

# Function to compile and run c++ files from the command line, call with $ cpp filename

# Compiling and running c++ files with
# $ make filename && ./filename is overly verbose
# This function lessens on the typing required

function cpp {
	
  if [ -z "$1" ]; then 
    echo "No filename provided."
  else
		
    # Compiler does not allow file extension, which may not be apparent to user, 
    # extension is therefore omitted in case it's written
    file=$1; base=${file%.*}
    # Compile and run
    make $base && ./$base
		
  fi
		
}