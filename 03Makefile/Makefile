all:
	@echo "ccccccccccccccccccccccccccccccccccccccccccc"
sinclude $(CURDIR)/config.mk

%: %_config
	@echo "dddddddddddddddddddddddddddddddddd" 
	$(MAKE)

cwm_config:
	@echo $(@)
	@$(CURDIR)/mkconfig $(@:_config=) arm arm920t smdk2400 samsung s3c24x0
	
smdk2400_config:
	@echo $(@)
	@echo $(@:_config=)
	@$(CURDIR)/mkconfig $(@:_config=) arm arm920t smdk2400 samsung s3c24x0


clean:
	rm config.mk

.PHONY:clean

