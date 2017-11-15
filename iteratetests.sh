rm report.txt

for (( i=1; i<=200; i++))
	do
		if [ -e "test$i.c" ]
		then					
			echo "Running Test $i" >> report.txt
			../install/./cc1 test$i.c		
			diff t$i.txt output.txt >> report.txt
		fi		
	done

