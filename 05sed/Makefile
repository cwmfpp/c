UIMAGE_LOADADDR=0x50008000
SUBARCH := $(shell echo "helloworld" | sed -e s/i.86/x86/ -e s/..$$/cwm/)
all:
	echo $(SUBARCH)
	UIMAGE_ENTRYADDR=$(UIMAGE_LOADADDR:8000=4000)

