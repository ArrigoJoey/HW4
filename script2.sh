#!/bin/bash
find ./* -mmin -5
touch ./script3.sh
chmod 700 script3.sh
echo "#!/bin/bash" >> script3.sh
echo "find ./* -mmin -5 | xargs rm -rf" >> script3.sh
./script3.sh
ls .
