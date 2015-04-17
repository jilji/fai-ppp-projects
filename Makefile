.PHONY: clean All

All:
	@echo "----------Building project:[ 1_Pong - Debug ]----------"
	@cd "1_Pong" && $(MAKE) -f  "1_Pong.mk"
clean:
	@echo "----------Cleaning project:[ 1_Pong - Debug ]----------"
	@cd "1_Pong" && $(MAKE) -f  "1_Pong.mk" clean
