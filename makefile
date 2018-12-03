build:
	@clear
	@echo "Compile & Execute: ${file}\n"
	@cc ${fdir}/${file} -o ${fdir}/a.out
	@${fdir}/a.out 
	@rm ${fdir}/a.out

help:
	@clear
	@echo "hello my friend"
