.PHONY: clean All

All:
	@echo "----------Building project:[ 1_Pong - Debug ]----------"
	$(MAKE) -C "1_Pong" -f "1_Pong.mk"
clean:
	@echo "----------Cleaning project:[ 1_Pong - Debug ]----------"
	$(MAKE) -C "1_Pong" -f "1_Pong.mk" clean
